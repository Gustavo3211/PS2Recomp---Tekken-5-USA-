#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00335908
// Address: 0x335908 - 0x3359f8
void sub_00335908_0x335908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335908_0x335908");
#endif

    switch (ctx->pc) {
        case 0x335978u: goto label_335978;
        default: break;
    }

    ctx->pc = 0x335908u;

    // 0x335908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33590c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33590cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335910: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x335910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335914: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x335914u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x335918: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x335918u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x33591c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33591cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335920: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x335924: 0xde220018  ld          $v0, 0x18($s1)
    ctx->pc = 0x335924u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x335928: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x335928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x33592c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x33592cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x335930: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x335930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x335934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x335934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x335938: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x335938u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x33593c: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x33593cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x335940: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x335940u;
    {
        const bool branch_taken_0x335940 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x335944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335940u;
        // 0x335944: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335940) {
            ctx->pc = 0x335958u;
            goto label_335958;
        }
    }
    ctx->pc = 0x335948u;
    // 0x335948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33594c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33594cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x335950: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x335950u;
    {
        const bool branch_taken_0x335950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335950u;
        // 0x335954: 0x46006002  mul.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335950) {
            ctx->pc = 0x335968u;
            goto label_335968;
        }
    }
    ctx->pc = 0x335958u;
label_335958:
    // 0x335958: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x335958u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33595c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33595cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x335960: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x335960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x335964: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x335964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_335968:
    // 0x335968: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x335968u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33596c: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x33596cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x335970: 0xc040880  jal         func_102200
    ctx->pc = 0x335970u;
    SET_GPR_U32(ctx, 31, 0x335978u);
    ctx->pc = 0x335974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335970u;
    // 0x335974: 0x2610027c  addiu       $s0, $s0, 0x27C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102200u, 0x335970u, 0x335978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335978u;
label_335978:
    // 0x335978: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x335978u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x33597c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x33597cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x335980: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x335980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335984: 0x2406f000  addiu       $a2, $zero, -0x1000
    ctx->pc = 0x335984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x335988: 0x3c07ff80  lui         $a3, 0xFF80
    ctx->pc = 0x335988u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65408 << 16));
    // 0x33598c: 0x34e70fff  ori         $a3, $a3, 0xFFF
    ctx->pc = 0x33598cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4095);
    // 0x335990: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x335990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335994: 0x32100fff  andi        $s0, $s0, 0xFFF
    ctx->pc = 0x335994u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4095);
    // 0x335998: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x335998u;
    {
        const bool branch_taken_0x335998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335998u;
        // 0x33599c: 0x24840019  addiu       $a0, $a0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335998) {
            ctx->pc = 0x3359A4u;
            goto label_3359a4;
        }
    }
    ctx->pc = 0x3359A0u;
    // 0x3359a0: 0x24a40032  addiu       $a0, $a1, 0x32
    ctx->pc = 0x3359a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
label_3359a4:
    // 0x3359a4: 0xde220018  ld          $v0, 0x18($s1)
    ctx->pc = 0x3359a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3359a8: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x3359a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x3359ac: 0xde230040  ld          $v1, 0x40($s1)
    ctx->pc = 0x3359acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x3359b0: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x3359b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x3359b4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3359b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3359b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3359b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3359bc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3359bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3359c0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x3359c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x3359c4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x3359c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x3359c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3359c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3359cc: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x3359ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x3359d0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x3359d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x3359d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3359d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3359d8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3359d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3359dc: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x3359dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
    // 0x3359e0: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x3359e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x3359e4: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x3359e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3359e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3359e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3359ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3359ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3359F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359ECu;
        // 0x3359f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3359ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3359F4u;
    // 0x3359f4: 0x0  nop
    ctx->pc = 0x3359f4u;
    // NOP
    ctx->pc = 0x3359f8u;
}
