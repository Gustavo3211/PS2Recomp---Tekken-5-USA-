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

// Function: sub_00214120
// Address: 0x214120 - 0x214198
void sub_00214120_0x214120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214120_0x214120");
#endif

    switch (ctx->pc) {
        case 0x214158u: goto label_214158;
        case 0x214170u: goto label_214170;
        case 0x214178u: goto label_214178;
        default: break;
    }

    ctx->pc = 0x214120u;

    // 0x214120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21412c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x21412cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x214130: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214134: 0x7c1021  addu        $v0, $v1, $gp
    ctx->pc = 0x214134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x214138: 0x8c42c8f0  lw          $v0, -0x3710($v0)
    ctx->pc = 0x214138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953200)));
    // 0x21413c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21413cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214140: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214144: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x214144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214148: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x214148u;
    {
        const bool branch_taken_0x214148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214148u;
        // 0x21414c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214148) {
            ctx->pc = 0x214178u;
            goto label_214178;
        }
    }
    ctx->pc = 0x214150u;
    // 0x214150: 0xc089662  jal         func_225988
    ctx->pc = 0x214150u;
    SET_GPR_U32(ctx, 31, 0x214158u);
    ctx->pc = 0x225988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225988u, 0x214150u, 0x214158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214158u;
label_214158:
    // 0x214158: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214158u;
    {
        const bool branch_taken_0x214158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214158u;
        // 0x21415c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214158) {
            ctx->pc = 0x214168u;
            goto label_214168;
        }
    }
    ctx->pc = 0x214160u;
    // 0x214160: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x214160u;
    {
        const bool branch_taken_0x214160 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214160u;
        // 0x214164: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214160) {
            ctx->pc = 0x21417Cu;
            goto label_21417c;
        }
    }
    ctx->pc = 0x214168u;
label_214168:
    // 0x214168: 0xc086f40  jal         func_21BD00
    ctx->pc = 0x214168u;
    SET_GPR_U32(ctx, 31, 0x214170u);
    ctx->pc = 0x21416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214168u;
    // 0x21416c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BD00u, 0x214168u, 0x214170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214170u;
label_214170:
    // 0x214170: 0xc084fa2  jal         func_213E88
    ctx->pc = 0x214170u;
    SET_GPR_U32(ctx, 31, 0x214178u);
    ctx->pc = 0x214174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214170u;
    // 0x214174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213E88u, 0x214170u, 0x214178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214178u;
label_214178:
    // 0x214178: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x214178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21417c:
    // 0x21417c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21417cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214184: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214188: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x214188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21418c: 0x3e00008  jr          $ra
    ctx->pc = 0x21418Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21418Cu;
        // 0x214190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21418Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214194u;
    // 0x214194: 0x0  nop
    ctx->pc = 0x214194u;
    // NOP
    ctx->pc = 0x214198u;
}
