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

// Function: sub_00358078
// Address: 0x358078 - 0x358110
void sub_00358078_0x358078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358078_0x358078");
#endif

    switch (ctx->pc) {
        case 0x3580b0u: goto label_3580b0;
        default: break;
    }

    ctx->pc = 0x358078u;

    // 0x358078: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x358078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x35807c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35807cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x358080: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x358080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358084: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x358084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x358088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x358088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35808c: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x35808cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
    // 0x358090: 0x2610e780  addiu       $s0, $s0, -0x1880
    ctx->pc = 0x358090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961024));
    // 0x358094: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x358094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x358098: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x358098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35809c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35809cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3580a0: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x3580a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3580a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3580a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3580a8: 0xc0d60da  jal         func_358368
    ctx->pc = 0x3580A8u;
    SET_GPR_U32(ctx, 31, 0x3580B0u);
    ctx->pc = 0x3580ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3580A8u;
    // 0x3580ac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x358368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358368u, 0x3580A8u, 0x3580B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3580B0u;
label_3580b0:
    // 0x3580b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3580B0u;
    {
        const bool branch_taken_0x3580b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3580b0) {
            ctx->pc = 0x3580B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3580B0u;
            // 0x3580b4: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3580C8u;
            goto label_3580c8;
        }
    }
    ctx->pc = 0x3580B8u;
    // 0x3580b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3580b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3580bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3580BCu;
    {
        const bool branch_taken_0x3580bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3580C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580BCu;
        // 0x3580c0: 0x34420007  ori         $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3580bc) {
            ctx->pc = 0x3580F8u;
            goto label_3580f8;
        }
    }
    ctx->pc = 0x3580C4u;
    // 0x3580c4: 0x0  nop
    ctx->pc = 0x3580c4u;
    // NOP
label_3580c8:
    // 0x3580c8: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x3580c8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3580cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3580ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3580d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3580d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3580d4: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x3580d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x3580d8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x3580d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3580dc: 0xe6140014  swc1        $f20, 0x14($s0)
    ctx->pc = 0x3580dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x3580e0: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x3580e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x3580e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3580e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3580e8: 0x0  nop
    ctx->pc = 0x3580e8u;
    // NOP
    // 0x3580ec: 0x0  nop
    ctx->pc = 0x3580ecu;
    // NOP
    // 0x3580f0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3580f0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x3580f4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x3580f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_3580f8:
    // 0x3580f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3580f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3580fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3580fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358100: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x358100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358104: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x358104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x358108: 0x3e00008  jr          $ra
    ctx->pc = 0x358108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358108u;
        // 0x35810c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358110u;
}
