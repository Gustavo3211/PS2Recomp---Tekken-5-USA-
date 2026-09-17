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

// Function: sub_0028A0E0
// Address: 0x28a0e0 - 0x28a160
void sub_0028A0E0_0x28a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A0E0_0x28a0e0");
#endif

    switch (ctx->pc) {
        case 0x28a104u: goto label_28a104;
        case 0x28a11cu: goto label_28a11c;
        case 0x28a124u: goto label_28a124;
        case 0x28a12cu: goto label_28a12c;
        case 0x28a14cu: goto label_28a14c;
        default: break;
    }

    ctx->pc = 0x28a0e0u;

    // 0x28a0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28a0e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28a0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28a0e8: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x28a0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x28a0ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a0f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a0f4: 0x2622db38  addiu       $v0, $s1, -0x24C8
    ctx->pc = 0x28a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957880));
    // 0x28a0f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28a0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28a0fc: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x28A0FCu;
    SET_GPR_U32(ctx, 31, 0x28A104u);
    ctx->pc = 0x28A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A0FCu;
    // 0x28a100: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x28A0FCu, 0x28A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A104u;
label_28a104:
    // 0x28a104: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x28a104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x28a108: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x28a108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x28a10c: 0x2442def0  addiu       $v0, $v0, -0x2110
    ctx->pc = 0x28a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958832));
    // 0x28a110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a114: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x28A114u;
    SET_GPR_U32(ctx, 31, 0x28A11Cu);
    ctx->pc = 0x28A118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A114u;
    // 0x28a118: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x28A114u, 0x28A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A11Cu;
label_28a11c:
    // 0x28a11c: 0xc0a17dc  jal         func_285F70
    ctx->pc = 0x28A11Cu;
    SET_GPR_U32(ctx, 31, 0x28A124u);
    ctx->pc = 0x28A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A11Cu;
    // 0x28a120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F70u, 0x28A11Cu, 0x28A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A124u;
label_28a124:
    // 0x28a124: 0xc0a2870  jal         func_28A1C0
    ctx->pc = 0x28A124u;
    SET_GPR_U32(ctx, 31, 0x28A12Cu);
    ctx->pc = 0x28A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A124u;
    // 0x28a128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A1C0u, 0x28A124u, 0x28A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A12Cu;
label_28a12c:
    // 0x28a12c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28A12Cu;
    {
        const bool branch_taken_0x28a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A12Cu;
        // 0x28a130: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a12c) {
            ctx->pc = 0x28A150u;
            goto label_28a150;
        }
    }
    ctx->pc = 0x28A134u;
    // 0x28a134: 0x0  nop
    ctx->pc = 0x28a134u;
    // NOP
    // 0x28a138: 0x2622db38  addiu       $v0, $s1, -0x24C8
    ctx->pc = 0x28a138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957880));
    // 0x28a13c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x28a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x28a140: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x28a140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x28a144: 0xc048b90  jal         func_122E40
    ctx->pc = 0x28A144u;
    SET_GPR_U32(ctx, 31, 0x28A14Cu);
    ctx->pc = 0x28A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A144u;
    // 0x28a148: 0x2484fd58  addiu       $a0, $a0, -0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x28A144u, 0x28A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A14Cu;
label_28a14c:
    // 0x28a14c: 0x0  nop
    ctx->pc = 0x28a14cu;
    // NOP
label_28a150:
    // 0x28a150: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28a150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28a154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a158: 0x3e00008  jr          $ra
    ctx->pc = 0x28A158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A158u;
        // 0x28a15c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A160u;
}
