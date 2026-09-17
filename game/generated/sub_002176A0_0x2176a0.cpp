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

// Function: sub_002176A0
// Address: 0x2176a0 - 0x217728
void sub_002176A0_0x2176a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002176A0_0x2176a0");
#endif

    switch (ctx->pc) {
        case 0x2176b0u: goto label_2176b0;
        case 0x2176c8u: goto label_2176c8;
        case 0x2176f4u: goto label_2176f4;
        case 0x2176fcu: goto label_2176fc;
        case 0x217704u: goto label_217704;
        case 0x217714u: goto label_217714;
        default: break;
    }

    ctx->pc = 0x2176a0u;

    // 0x2176a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2176a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2176a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2176a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2176a8: 0xc07cfc8  jal         func_1F3F20
    ctx->pc = 0x2176A8u;
    SET_GPR_U32(ctx, 31, 0x2176B0u);
    ctx->pc = 0x1F3F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3F20u, 0x2176A8u, 0x2176B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176B0u;
label_2176b0:
    // 0x2176b0: 0x8f829718  lw          $v0, -0x68E8($gp)
    ctx->pc = 0x2176b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
    // 0x2176b4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2176b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2176b8: 0xac608878  sw          $zero, -0x7788($v1)
    ctx->pc = 0x2176b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A8878u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8878u, _value); } while (0);
    // 0x2176bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2176bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2176c0: 0xc0a10c0  jal         func_284300
    ctx->pc = 0x2176C0u;
    SET_GPR_U32(ctx, 31, 0x2176C8u);
    ctx->pc = 0x2176C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176C0u;
    // 0x2176c4: 0xaf829718  sw          $v0, -0x68E8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940440), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284300u, 0x2176C0u, 0x2176C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176C8u;
label_2176c8:
    // 0x2176c8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2176C8u;
    {
        const bool branch_taken_0x2176c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2176CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176C8u;
        // 0x2176cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2176c8) {
            ctx->pc = 0x21771Cu;
            goto label_21771c;
        }
    }
    ctx->pc = 0x2176D0u;
    // 0x2176d0: 0xc7819718  lwc1        $f1, -0x68E8($gp)
    ctx->pc = 0x2176d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2176d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2176d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2176d8: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2176d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x2176dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2176dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2176e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2176e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2176e4: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x2176E4u;
    {
        const bool branch_taken_0x2176e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2176e4) {
            ctx->pc = 0x2176E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2176E4u;
            // 0x2176e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217720u;
            goto label_217720;
        }
    }
    ctx->pc = 0x2176ECu;
    // 0x2176ec: 0xc086612  jal         func_219848
    ctx->pc = 0x2176ECu;
    SET_GPR_U32(ctx, 31, 0x2176F4u);
    ctx->pc = 0x2176F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176ECu;
    // 0x2176f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219848u, 0x2176ECu, 0x2176F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176F4u;
label_2176f4:
    // 0x2176f4: 0xc084eb2  jal         func_213AC8
    ctx->pc = 0x2176F4u;
    SET_GPR_U32(ctx, 31, 0x2176FCu);
    ctx->pc = 0x213AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213AC8u, 0x2176F4u, 0x2176FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176FCu;
label_2176fc:
    // 0x2176fc: 0xc0a0f6a  jal         func_283DA8
    ctx->pc = 0x2176FCu;
    SET_GPR_U32(ctx, 31, 0x217704u);
    ctx->pc = 0x283DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283DA8u, 0x2176FCu, 0x217704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217704u;
label_217704:
    // 0x217704: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x217704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x217708: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x217708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x21770c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x21770Cu;
    SET_GPR_U32(ctx, 31, 0x217714u);
    ctx->pc = 0x217710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21770Cu;
    // 0x217710: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x21770Cu, 0x217714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217714u;
label_217714:
    // 0x217714: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x217714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x217718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21771c:
    // 0x21771c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21771cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217720:
    // 0x217720: 0x3e00008  jr          $ra
    ctx->pc = 0x217720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217720u;
        // 0x217724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217728u;
}
