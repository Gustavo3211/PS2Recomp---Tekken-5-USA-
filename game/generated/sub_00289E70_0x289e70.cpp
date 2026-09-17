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

// Function: sub_00289E70
// Address: 0x289e70 - 0x289ef0
void sub_00289E70_0x289e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289E70_0x289e70");
#endif

    switch (ctx->pc) {
        case 0x289e94u: goto label_289e94;
        case 0x289eacu: goto label_289eac;
        case 0x289eb4u: goto label_289eb4;
        case 0x289ebcu: goto label_289ebc;
        case 0x289edcu: goto label_289edc;
        default: break;
    }

    ctx->pc = 0x289e70u;

    // 0x289e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x289e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x289e74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x289e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x289e78: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x289e78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x289e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x289e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x289e80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x289e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e84: 0x2622db38  addiu       $v0, $s1, -0x24C8
    ctx->pc = 0x289e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957880));
    // 0x289e88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x289e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x289e8c: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x289E8Cu;
    SET_GPR_U32(ctx, 31, 0x289E94u);
    ctx->pc = 0x289E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E8Cu;
    // 0x289e90: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x289E8Cu, 0x289E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E94u;
label_289e94:
    // 0x289e94: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x289e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x289e98: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x289e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x289e9c: 0x2442de68  addiu       $v0, $v0, -0x2198
    ctx->pc = 0x289e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958696));
    // 0x289ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ea4: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x289EA4u;
    SET_GPR_U32(ctx, 31, 0x289EACu);
    ctx->pc = 0x289EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289EA4u;
    // 0x289ea8: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x289EA4u, 0x289EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289EACu;
label_289eac:
    // 0x289eac: 0xc0a17dc  jal         func_285F70
    ctx->pc = 0x289EACu;
    SET_GPR_U32(ctx, 31, 0x289EB4u);
    ctx->pc = 0x289EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289EACu;
    // 0x289eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F70u, 0x289EACu, 0x289EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289EB4u;
label_289eb4:
    // 0x289eb4: 0xc0a27d4  jal         func_289F50
    ctx->pc = 0x289EB4u;
    SET_GPR_U32(ctx, 31, 0x289EBCu);
    ctx->pc = 0x289EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289EB4u;
    // 0x289eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289F50u, 0x289EB4u, 0x289EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289EBCu;
label_289ebc:
    // 0x289ebc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x289EBCu;
    {
        const bool branch_taken_0x289ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EBCu;
        // 0x289ec0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ebc) {
            ctx->pc = 0x289EE0u;
            goto label_289ee0;
        }
    }
    ctx->pc = 0x289EC4u;
    // 0x289ec4: 0x0  nop
    ctx->pc = 0x289ec4u;
    // NOP
    // 0x289ec8: 0x2622db38  addiu       $v0, $s1, -0x24C8
    ctx->pc = 0x289ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957880));
    // 0x289ecc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x289eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x289ed0: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x289ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x289ed4: 0xc048b90  jal         func_122E40
    ctx->pc = 0x289ED4u;
    SET_GPR_U32(ctx, 31, 0x289EDCu);
    ctx->pc = 0x289ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289ED4u;
    // 0x289ed8: 0x2484fd2c  addiu       $a0, $a0, -0x2D4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966572));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x289ED4u, 0x289EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289EDCu;
label_289edc:
    // 0x289edc: 0x0  nop
    ctx->pc = 0x289edcu;
    // NOP
label_289ee0:
    // 0x289ee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x289ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x289ee4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x289ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x289EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EE8u;
        // 0x289eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289EF0u;
}
