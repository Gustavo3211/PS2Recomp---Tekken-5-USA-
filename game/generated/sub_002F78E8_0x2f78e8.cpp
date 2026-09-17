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

// Function: sub_002F78E8
// Address: 0x2f78e8 - 0x2f7980
void sub_002F78E8_0x2f78e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F78E8_0x2f78e8");
#endif

    switch (ctx->pc) {
        case 0x2f7970u: goto label_2f7970;
        default: break;
    }

    ctx->pc = 0x2f78e8u;

    // 0x2f78e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f78e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f78ec: 0x30a58090  andi        $a1, $a1, 0x8090
    ctx->pc = 0x2f78ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32912);
    // 0x2f78f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f78f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f78f4: 0x8c8300fc  lw          $v1, 0xFC($a0)
    ctx->pc = 0x2f78f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x2f78f8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F78F8u;
    {
        const bool branch_taken_0x2f78f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78F8u;
        // 0x2f78fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f78f8) {
            ctx->pc = 0x2F7974u;
            goto label_2f7974;
        }
    }
    ctx->pc = 0x2F7900u;
    // 0x2f7900: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F7900u;
    {
        const bool branch_taken_0x2f7900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7900u;
        // 0x2f7904: 0x2485015c  addiu       $a1, $a0, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7900) {
            ctx->pc = 0x2F7974u;
            goto label_2f7974;
        }
    }
    ctx->pc = 0x2F7908u;
    // 0x2f7908: 0xac8000fc  sw          $zero, 0xFC($a0)
    ctx->pc = 0x2f7908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 0));
    // 0x2f790c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f7910: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7910u;
    {
        const bool branch_taken_0x2f7910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7910u;
        // 0x2f7914: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7910) {
            ctx->pc = 0x2F7928u;
            goto label_2f7928;
        }
    }
    ctx->pc = 0x2F7918u;
    // 0x2f7918: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f7918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f791c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f791cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f7920: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7920u;
    {
        const bool branch_taken_0x2f7920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7920u;
        // 0x2f7924: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7920) {
            ctx->pc = 0x2F7938u;
            goto label_2f7938;
        }
    }
    ctx->pc = 0x2F7928u;
label_2f7928:
    // 0x2f7928: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f7928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2f792c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f792cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7930: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f7930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f7934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f7934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7938:
    // 0x2f7938: 0x24850164  addiu       $a1, $a0, 0x164
    ctx->pc = 0x2f7938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    // 0x2f793c: 0xacc20124  sw          $v0, 0x124($a2)
    ctx->pc = 0x2f793cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 292), GPR_U32(ctx, 2));
    // 0x2f7940: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f7940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f7944: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7944u;
    {
        const bool branch_taken_0x2f7944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7944) {
            ctx->pc = 0x2F7948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7944u;
            // 0x2f7948: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7960u;
            goto label_2f7960;
        }
    }
    ctx->pc = 0x2F794Cu;
    // 0x2f794c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f7950: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f7950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f7954: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7954u;
    {
        const bool branch_taken_0x2f7954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f7954) {
            ctx->pc = 0x2F7968u;
            goto label_2f7968;
        }
    }
    ctx->pc = 0x2F795Cu;
    // 0x2f795c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f795cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f7960:
    // 0x2f7960: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f7960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7964: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f7964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f7968:
    // 0x2f7968: 0xc0be05e  jal         func_2F8178
    ctx->pc = 0x2F7968u;
    SET_GPR_U32(ctx, 31, 0x2F7970u);
    ctx->pc = 0x2F8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8178u, 0x2F7968u, 0x2F7970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7970u;
label_2f7970:
    // 0x2f7970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f7970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7974:
    // 0x2f7974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f7974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7978: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7978u;
        // 0x2f797c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7980u;
}
