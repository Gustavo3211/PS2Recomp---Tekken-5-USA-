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

// Function: sub_0029DD88
// Address: 0x29dd88 - 0x29de20
void sub_0029DD88_0x29dd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DD88_0x29dd88");
#endif

    switch (ctx->pc) {
        case 0x29ddb4u: goto label_29ddb4;
        case 0x29ddc0u: goto label_29ddc0;
        default: break;
    }

    ctx->pc = 0x29dd88u;

    // 0x29dd88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29dd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29dd8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29dd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29dd90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29dd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29dd94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29dd94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29dd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29dd9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29dd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29dda0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29dda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29dda4: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x29dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x29dda8: 0x8e330154  lw          $s3, 0x154($s1)
    ctx->pc = 0x29dda8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x29ddac: 0xc0a7788  jal         func_29DE20
    ctx->pc = 0x29DDACu;
    SET_GPR_U32(ctx, 31, 0x29DDB4u);
    ctx->pc = 0x29DDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DDACu;
    // 0x29ddb0: 0x8c52000c  lw          $s2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DE20u, 0x29DDACu, 0x29DDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DDB4u;
label_29ddb4:
    // 0x29ddb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ddb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ddb8: 0xc0a77cc  jal         func_29DF30
    ctx->pc = 0x29DDB8u;
    SET_GPR_U32(ctx, 31, 0x29DDC0u);
    ctx->pc = 0x29DDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DDB8u;
    // 0x29ddbc: 0x30500001  andi        $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DF30u, 0x29DDB8u, 0x29DDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DDC0u;
label_29ddc0:
    // 0x29ddc0: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x29ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x29ddc4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x29ddc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x29ddc8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x29DDC8u;
    {
        const bool branch_taken_0x29ddc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDC8u;
        // 0x29ddcc: 0x2c64000a  sltiu       $a0, $v1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ddc8) {
            ctx->pc = 0x29DE04u;
            goto label_29de04;
        }
    }
    ctx->pc = 0x29DDD0u;
    // 0x29ddd0: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x29ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x29ddd4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x29ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x29ddd8: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x29ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x29dddc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29DDDCu;
    {
        const bool branch_taken_0x29dddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDDCu;
        // 0x29dde0: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dddc) {
            ctx->pc = 0x29DDFCu;
            goto label_29ddfc;
        }
    }
    ctx->pc = 0x29DDE4u;
    // 0x29dde4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x29dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29dde8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x29dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x29ddec: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x29ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x29ddf0: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x29ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29ddf4: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x29ddf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x29ddf8: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x29ddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
label_29ddfc:
    // 0x29ddfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29de00: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x29de00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_29de04:
    // 0x29de04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29de04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29de08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29de08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29de0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29de0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29de10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29de10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29de14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29de14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29de18: 0x3e00008  jr          $ra
    ctx->pc = 0x29DE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE18u;
        // 0x29de1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DE20u;
}
