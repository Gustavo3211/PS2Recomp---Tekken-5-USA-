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

// Function: sub_0024DE58
// Address: 0x24de58 - 0x24df10
void sub_0024DE58_0x24de58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DE58_0x24de58");
#endif

    switch (ctx->pc) {
        case 0x24dea8u: goto label_24dea8;
        case 0x24def8u: goto label_24def8;
        case 0x24df00u: goto label_24df00;
        default: break;
    }

    ctx->pc = 0x24de58u;

    // 0x24de58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24de58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24de5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24de5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24de60: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x24de60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x24de64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24de64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24de68: 0x2603fb10  addiu       $v1, $s0, -0x4F0
    ctx->pc = 0x24de68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966032));
    // 0x24de6c: 0x24620130  addiu       $v0, $v1, 0x130
    ctx->pc = 0x24de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x24de70: 0x8c640260  lw          $a0, 0x260($v1)
    ctx->pc = 0x24de70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3AFD70u));
    // 0x24de74: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x24de74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AFD48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFD48u, _value); } while (0);
    // 0x24de78: 0xac630100  sw          $v1, 0x100($v1)
    ctx->pc = 0x24de78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3AFC10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFC10u, _value); } while (0);
    // 0x24de7c: 0xac600104  sw          $zero, 0x104($v1)
    ctx->pc = 0x24de7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AFC14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFC14u, _value); } while (0);
    // 0x24de80: 0xac60010c  sw          $zero, 0x10C($v1)
    ctx->pc = 0x24de80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AFC1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFC1Cu, _value); } while (0);
    // 0x24de84: 0xac600108  sw          $zero, 0x108($v1)
    ctx->pc = 0x24de84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AFC18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFC18u, _value); } while (0);
    // 0x24de88: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x24de88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3AFD40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFD40u, _value); } while (0);
    // 0x24de8c: 0xac440104  sw          $a0, 0x104($v0)
    ctx->pc = 0x24de8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3AFD44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3AFD44u, _value); } while (0);
    // 0x24de90: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24DE90u;
    {
        const bool branch_taken_0x24de90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE90u;
        // 0x24de94: 0xac40010c  sw          $zero, 0x10C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de90) {
            ctx->pc = 0x24DEE8u;
            goto label_24dee8;
        }
    }
    ctx->pc = 0x24DE98u;
    // 0x24de98: 0x8c620264  lw          $v0, 0x264($v1)
    ctx->pc = 0x24de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 612)));
    // 0x24de9c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24DE9Cu;
    {
        const bool branch_taken_0x24de9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE9Cu;
        // 0x24dea0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de9c) {
            ctx->pc = 0x24DED4u;
            goto label_24ded4;
        }
    }
    ctx->pc = 0x24DEA4u;
    // 0x24dea4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x24dea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24dea8:
    // 0x24dea8: 0x2482fed0  addiu       $v0, $a0, -0x130
    ctx->pc = 0x24dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966992));
    // 0x24deac: 0x24830130  addiu       $v1, $a0, 0x130
    ctx->pc = 0x24deacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    // 0x24deb0: 0xac820100  sw          $v0, 0x100($a0)
    ctx->pc = 0x24deb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
    // 0x24deb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24deb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24deb8: 0xac800108  sw          $zero, 0x108($a0)
    ctx->pc = 0x24deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 0));
    // 0x24debc: 0xac830104  sw          $v1, 0x104($a0)
    ctx->pc = 0x24debcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 3));
    // 0x24dec0: 0xac80010c  sw          $zero, 0x10C($a0)
    ctx->pc = 0x24dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 0));
    // 0x24dec4: 0x8cc20264  lw          $v0, 0x264($a2)
    ctx->pc = 0x24dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 612)));
    // 0x24dec8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x24dec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24decc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x24DECCu;
    {
        const bool branch_taken_0x24decc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DECCu;
        // 0x24ded0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24decc) {
            ctx->pc = 0x24DEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dea8;
        }
    }
    ctx->pc = 0x24DED4u;
label_24ded4:
    // 0x24ded4: 0x2602fb10  addiu       $v0, $s0, -0x4F0
    ctx->pc = 0x24ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966032));
    // 0x24ded8: 0x8c430260  lw          $v1, 0x260($v0)
    ctx->pc = 0x24ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 608)));
    // 0x24dedc: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x24dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x24dee0: 0xac620100  sw          $v0, 0x100($v1)
    ctx->pc = 0x24dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
    // 0x24dee4: 0xac80ffd4  sw          $zero, -0x2C($a0)
    ctx->pc = 0x24dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967252), GPR_U32(ctx, 0));
label_24dee8:
    // 0x24dee8: 0x2610fb10  addiu       $s0, $s0, -0x4F0
    ctx->pc = 0x24dee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966032));
    // 0x24deec: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x24deecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x24def0: 0xc09480c  jal         func_252030
    ctx->pc = 0x24DEF0u;
    SET_GPR_U32(ctx, 31, 0x24DEF8u);
    ctx->pc = 0x24DEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DEF0u;
    // 0x24def4: 0xae00026c  sw          $zero, 0x26C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252030u, 0x24DEF0u, 0x24DEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DEF8u;
label_24def8:
    // 0x24def8: 0xc08be20  jal         func_22F880
    ctx->pc = 0x24DEF8u;
    SET_GPR_U32(ctx, 31, 0x24DF00u);
    ctx->pc = 0x24DEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DEF8u;
    // 0x24defc: 0xae000278  sw          $zero, 0x278($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F880u, 0x24DEF8u, 0x24DF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF00u;
label_24df00:
    // 0x24df00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24df00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24df04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24df04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24df08: 0x3e00008  jr          $ra
    ctx->pc = 0x24DF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF08u;
        // 0x24df0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DF10u;
}
