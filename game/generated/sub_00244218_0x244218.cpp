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

// Function: sub_00244218
// Address: 0x244218 - 0x2442a8
void sub_00244218_0x244218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244218_0x244218");
#endif

    switch (ctx->pc) {
        case 0x244258u: goto label_244258;
        case 0x244278u: goto label_244278;
        default: break;
    }

    ctx->pc = 0x244218u;

    // 0x244218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24421c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24421cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x244220: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x244220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244224: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x244224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x244228: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x244228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24422c: 0x3c120016  lui         $s2, 0x16
    ctx->pc = 0x24422cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)22 << 16));
    // 0x244230: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x244230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x244234: 0x8e5267ac  lw          $s2, 0x67AC($s2)
    ctx->pc = 0x244234u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26540)));
    // 0x244238: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24423c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24423cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244240: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x244240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x244244: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x244244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244248: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x244248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24424c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x24424cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x244250: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x244250u;
    {
        const bool branch_taken_0x244250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244250u;
        // 0x244254: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244250) {
            ctx->pc = 0x24425Cu;
            goto label_24425c;
        }
    }
    ctx->pc = 0x244258u;
label_244258:
    // 0x244258: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x244258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24425c:
    // 0x24425c: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x24425cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x244260: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x244260u;
    {
        const bool branch_taken_0x244260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244260u;
        // 0x244264: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244260) {
            ctx->pc = 0x244284u;
            goto label_244284;
        }
    }
    ctx->pc = 0x244268u;
    // 0x244268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24426c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24426cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244270: 0xc091034  jal         func_2440D0
    ctx->pc = 0x244270u;
    SET_GPR_U32(ctx, 31, 0x244278u);
    ctx->pc = 0x244274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244270u;
    // 0x244274: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2440D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2440D0u, 0x244270u, 0x244278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244278u;
label_244278:
    // 0x244278: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x244278u;
    {
        const bool branch_taken_0x244278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244278u;
        // 0x24427c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244278) {
            ctx->pc = 0x244258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244258;
        }
    }
    ctx->pc = 0x244280u;
    // 0x244280: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x244280u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244284:
    // 0x244284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244288: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x244288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24428c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24428cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244290: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x244290u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244294: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x244294u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244298: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x244298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24429c: 0x3e00008  jr          $ra
    ctx->pc = 0x24429Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2442A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24429Cu;
        // 0x2442a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24429Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2442A4u;
    // 0x2442a4: 0x0  nop
    ctx->pc = 0x2442a4u;
    // NOP
    ctx->pc = 0x2442a8u;
}
