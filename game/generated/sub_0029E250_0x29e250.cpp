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

// Function: sub_0029E250
// Address: 0x29e250 - 0x29e360
void sub_0029E250_0x29e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E250_0x29e250");
#endif

    switch (ctx->pc) {
        case 0x29e30cu: goto label_29e30c;
        case 0x29e354u: goto label_29e354;
        default: break;
    }

    ctx->pc = 0x29e250u;

    // 0x29e250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29e254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29e254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29e258: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x29e258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x29e25c: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x29E25Cu;
    {
        const bool branch_taken_0x29e25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e25c) {
            ctx->pc = 0x29E260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E25Cu;
            // 0x29e260: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E358u;
            goto label_29e358;
        }
    }
    ctx->pc = 0x29E264u;
    // 0x29e264: 0x8c840150  lw          $a0, 0x150($a0)
    ctx->pc = 0x29e264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29e268: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x29e268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x29e26c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29e26cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e270: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x29e270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e274: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29e274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29e278: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x29e278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x29e27c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29e27cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29e280: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x29e280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x29e284: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29e284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29e288: 0x0  nop
    ctx->pc = 0x29e288u;
    // NOP
    // 0x29e28c: 0x0  nop
    ctx->pc = 0x29e28cu;
    // NOP
    // 0x29e290: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x29e290u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x29e294: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x29e294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29e298: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x29e298u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e29c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e29cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29e2a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29e2a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29e2a4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x29E2A4u;
    {
        const bool branch_taken_0x29e2a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e2a4) {
            ctx->pc = 0x29E2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E2A4u;
            // 0x29e2a8: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E2C4u;
            goto label_29e2c4;
        }
    }
    ctx->pc = 0x29E2ACu;
    // 0x29e2ac: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x29e2acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x29e2b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29e2b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29e2b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29e2b8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29e2b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29e2bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29e2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29e2c0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x29e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_29e2c4:
    // 0x29e2c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29e2c8: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x29e2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x29e2cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29E2CCu;
    {
        const bool branch_taken_0x29e2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2CCu;
        // 0x29e2d0: 0x3c0600ff  lui         $a2, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e2cc) {
            ctx->pc = 0x29E318u;
            goto label_29e318;
        }
    }
    ctx->pc = 0x29E2D4u;
    // 0x29e2d4: 0x33600  sll         $a2, $v1, 24
    ctx->pc = 0x29e2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x29e2d8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29e2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29e2dc: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x29e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
    // 0x29e2e0: 0x2484c150  addiu       $a0, $a0, -0x3EB0
    ctx->pc = 0x29e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951248));
    // 0x29e2e4: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x29e2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x29e2e8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x29e2e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x29e2ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29e2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e2f0: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x29e2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29e2f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29e2f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e2f8: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x29e2f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x29e2fc: 0x240a001e  addiu       $t2, $zero, 0x1E
    ctx->pc = 0x29e2fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x29e300: 0x240b0147  addiu       $t3, $zero, 0x147
    ctx->pc = 0x29e300u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x29e304: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29E304u;
    SET_GPR_U32(ctx, 31, 0x29E30Cu);
    ctx->pc = 0x29E308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E304u;
    // 0x29e308: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29E304u, 0x29E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E30Cu;
label_29e30c:
    // 0x29e30c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x29E30Cu;
    {
        const bool branch_taken_0x29e30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E30Cu;
        // 0x29e310: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e30c) {
            ctx->pc = 0x29E358u;
            goto label_29e358;
        }
    }
    ctx->pc = 0x29E314u;
    // 0x29e314: 0x0  nop
    ctx->pc = 0x29e314u;
    // NOP
label_29e318:
    // 0x29e318: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x29e318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x29e31c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x29e31cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x29e320: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29e320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29e324: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x29e324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
    // 0x29e328: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29e328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29e32c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x29e32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x29e330: 0x2484c150  addiu       $a0, $a0, -0x3EB0
    ctx->pc = 0x29e330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951248));
    // 0x29e334: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29e334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e338: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x29e338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29e33c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29e33cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e340: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x29e340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x29e344: 0x240a001e  addiu       $t2, $zero, 0x1E
    ctx->pc = 0x29e344u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x29e348: 0x240b0147  addiu       $t3, $zero, 0x147
    ctx->pc = 0x29e348u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x29e34c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29E34Cu;
    SET_GPR_U32(ctx, 31, 0x29E354u);
    ctx->pc = 0x29E350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E34Cu;
    // 0x29e350: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29E34Cu, 0x29E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E354u;
label_29e354:
    // 0x29e354: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29e354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e358:
    // 0x29e358: 0x3e00008  jr          $ra
    ctx->pc = 0x29E358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E358u;
        // 0x29e35c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E360u;
}
