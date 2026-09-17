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

// Function: sub_00304420
// Address: 0x304420 - 0x304498
void sub_00304420_0x304420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304420_0x304420");
#endif

    switch (ctx->pc) {
        case 0x304458u: goto label_304458;
        case 0x304474u: goto label_304474;
        default: break;
    }

    ctx->pc = 0x304420u;

    // 0x304420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x304424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x304428: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x304428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30442c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30442cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304430: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x304430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304434: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x304434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x304438: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x304438u;
    {
        const bool branch_taken_0x304438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304438u;
        // 0x30443c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304438) {
            ctx->pc = 0x304488u;
            goto label_304488;
        }
    }
    ctx->pc = 0x304440u;
    // 0x304440: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x304440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x304444: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x304444u;
    {
        const bool branch_taken_0x304444 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x304448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304444u;
        // 0x304448: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304444) {
            ctx->pc = 0x304484u;
            goto label_304484;
        }
    }
    ctx->pc = 0x30444Cu;
    // 0x30444c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30444Cu;
    {
        const bool branch_taken_0x30444c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30444Cu;
        // 0x304450: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30444c) {
            ctx->pc = 0x304460u;
            goto label_304460;
        }
    }
    ctx->pc = 0x304454u;
    // 0x304454: 0x0  nop
    ctx->pc = 0x304454u;
    // NOP
label_304458:
    // 0x304458: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x304458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x30445c: 0x0  nop
    ctx->pc = 0x30445cu;
    // NOP
label_304460:
    // 0x304460: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x304460u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x304464: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x304464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x304468: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x304468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30446c: 0xc0ae3be  jal         func_2B8EF8
    ctx->pc = 0x30446Cu;
    SET_GPR_U32(ctx, 31, 0x304474u);
    ctx->pc = 0x304470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30446Cu;
    // 0x304470: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8EF8u, 0x30446Cu, 0x304474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304474u;
label_304474:
    // 0x304474: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x304474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x304478: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x304478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30447c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x30447Cu;
    {
        const bool branch_taken_0x30447c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30447c) {
            ctx->pc = 0x304480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30447Cu;
            // 0x304480: 0x8e23006c  lw          $v1, 0x6C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304458;
        }
    }
    ctx->pc = 0x304484u;
label_304484:
    // 0x304484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304488:
    // 0x304488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x304488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30448c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30448cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304490: 0x3e00008  jr          $ra
    ctx->pc = 0x304490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304490u;
        // 0x304494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304498u;
}
