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

// Function: sub_00217BB0
// Address: 0x217bb0 - 0x217c58
void sub_00217BB0_0x217bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217BB0_0x217bb0");
#endif

    switch (ctx->pc) {
        case 0x217bdcu: goto label_217bdc;
        case 0x217becu: goto label_217bec;
        case 0x217bf4u: goto label_217bf4;
        case 0x217c00u: goto label_217c00;
        case 0x217c0cu: goto label_217c0c;
        case 0x217c1cu: goto label_217c1c;
        case 0x217c24u: goto label_217c24;
        default: break;
    }

    ctx->pc = 0x217bb0u;

    // 0x217bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217bb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217bc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x217bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x217bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x217bc8: 0x9222001d  lbu         $v0, 0x1D($s1)
    ctx->pc = 0x217bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x217bcc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x217BCCu;
    {
        const bool branch_taken_0x217bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BCCu;
        // 0x217bd0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217bcc) {
            ctx->pc = 0x217C30u;
            goto label_217c30;
        }
    }
    ctx->pc = 0x217BD4u;
    // 0x217bd4: 0xc08f022  jal         func_23C088
    ctx->pc = 0x217BD4u;
    SET_GPR_U32(ctx, 31, 0x217BDCu);
    ctx->pc = 0x23C088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C088u, 0x217BD4u, 0x217BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BDCu;
label_217bdc:
    // 0x217bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217be0: 0xa222001d  sb          $v0, 0x1D($s1)
    ctx->pc = 0x217be0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 2));
    // 0x217be4: 0xc0a3af8  jal         func_28EBE0
    ctx->pc = 0x217BE4u;
    SET_GPR_U32(ctx, 31, 0x217BECu);
    ctx->pc = 0x217BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BE4u;
    // 0x217be8: 0xa2200062  sb          $zero, 0x62($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 98), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBE0u, 0x217BE4u, 0x217BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BECu;
label_217bec:
    // 0x217bec: 0xc089a00  jal         func_226800
    ctx->pc = 0x217BECu;
    SET_GPR_U32(ctx, 31, 0x217BF4u);
    ctx->pc = 0x226800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226800u, 0x217BECu, 0x217BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BF4u;
label_217bf4:
    // 0x217bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bf8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x217BF8u;
    SET_GPR_U32(ctx, 31, 0x217C00u);
    ctx->pc = 0x217BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BF8u;
    // 0x217bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x217BF8u, 0x217C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C00u;
label_217c00:
    // 0x217c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c04: 0xc08520c  jal         func_214830
    ctx->pc = 0x217C04u;
    SET_GPR_U32(ctx, 31, 0x217C0Cu);
    ctx->pc = 0x217C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C04u;
    // 0x217c08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214830u, 0x217C04u, 0x217C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C0Cu;
label_217c0c:
    // 0x217c0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x217c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c14: 0xc0a929a  jal         func_2A4A68
    ctx->pc = 0x217C14u;
    SET_GPR_U32(ctx, 31, 0x217C1Cu);
    ctx->pc = 0x217C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C14u;
    // 0x217c18: 0x26260062  addiu       $a2, $s1, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4A68u, 0x217C14u, 0x217C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C1Cu;
label_217c1c:
    // 0x217c1c: 0xc0a5a0c  jal         func_296830
    ctx->pc = 0x217C1Cu;
    SET_GPR_U32(ctx, 31, 0x217C24u);
    ctx->pc = 0x217C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C1Cu;
    // 0x217c20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296830u, 0x217C1Cu, 0x217C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C24u;
label_217c24:
    // 0x217c24: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x217c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x217c28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x217C28u;
    {
        const bool branch_taken_0x217c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C28u;
        // 0x217c2c: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c28) {
            ctx->pc = 0x217C38u;
            goto label_217c38;
        }
    }
    ctx->pc = 0x217C30u;
label_217c30:
    // 0x217c30: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x217c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x217c34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x217c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_217c38:
    // 0x217c38: 0xac62886c  sw          $v0, -0x7794($v1)
    ctx->pc = 0x217c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936684), GPR_U32(ctx, 2));
    // 0x217c3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217c44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217c48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x217c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x217C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C4Cu;
        // 0x217c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217C54u;
    // 0x217c54: 0x0  nop
    ctx->pc = 0x217c54u;
    // NOP
    ctx->pc = 0x217c58u;
}
