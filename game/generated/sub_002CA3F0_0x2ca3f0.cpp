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

// Function: sub_002CA3F0
// Address: 0x2ca3f0 - 0x2ca4a8
void sub_002CA3F0_0x2ca3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA3F0_0x2ca3f0");
#endif

    switch (ctx->pc) {
        case 0x2ca424u: goto label_2ca424;
        default: break;
    }

    ctx->pc = 0x2ca3f0u;

    // 0x2ca3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca3f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ca3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ca3f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ca3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ca3fc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ca3fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca404: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ca404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca408: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ca408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ca40c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ca40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca410: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ca410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ca414: 0x1243001e  beq         $s2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2CA414u;
    {
        const bool branch_taken_0x2ca414 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA414u;
        // 0x2ca418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca414) {
            ctx->pc = 0x2CA490u;
            goto label_2ca490;
        }
    }
    ctx->pc = 0x2CA41Cu;
    // 0x2ca41c: 0xc0b2a76  jal         func_2CA9D8
    ctx->pc = 0x2CA41Cu;
    SET_GPR_U32(ctx, 31, 0x2CA424u);
    ctx->pc = 0x2CA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9D8u, 0x2CA41Cu, 0x2CA424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA424u;
label_2ca424:
    // 0x2ca424: 0x8f86bb18  lw          $a2, -0x44E8($gp)
    ctx->pc = 0x2ca424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2ca428: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ca428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca42c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca42cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca430: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ca430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ca434: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x2ca434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2ca438: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ca438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ca43c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2ca43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2ca440: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ca440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ca444: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2ca444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2ca448: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2ca448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ca44c: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CA44Cu;
    {
        const bool branch_taken_0x2ca44c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA44Cu;
        // 0x2ca450: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca44c) {
            ctx->pc = 0x2CA490u;
            goto label_2ca490;
        }
    }
    ctx->pc = 0x2CA454u;
    // 0x2ca454: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CA454u;
    {
        const bool branch_taken_0x2ca454 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2CA458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA454u;
        // 0x2ca458: 0x246603a4  addiu       $a2, $v1, 0x3A4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 932));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca454) {
            ctx->pc = 0x2CA490u;
            goto label_2ca490;
        }
    }
    ctx->pc = 0x2CA45Cu;
    // 0x2ca45c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2ca45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ca460: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA460u;
    {
        const bool branch_taken_0x2ca460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca460) {
            ctx->pc = 0x2CA464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA460u;
            // 0x2ca464: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA480u;
            goto label_2ca480;
        }
    }
    ctx->pc = 0x2CA468u;
    // 0x2ca468: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x2ca468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ca46c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA46Cu;
    {
        const bool branch_taken_0x2ca46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca46c) {
            ctx->pc = 0x2CA470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA46Cu;
            // 0x2ca470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA490u;
            goto label_2ca490;
        }
    }
    ctx->pc = 0x2CA474u;
    // 0x2ca474: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2ca474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ca478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA478u;
    {
        const bool branch_taken_0x2ca478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA478u;
        // 0x2ca47c: 0x906203ac  lbu         $v0, 0x3AC($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca478) {
            ctx->pc = 0x2CA488u;
            goto label_2ca488;
        }
    }
    ctx->pc = 0x2CA480u;
label_2ca480:
    // 0x2ca480: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2ca480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ca484: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2ca484u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2ca488:
    // 0x2ca488: 0x2421007  srav        $v0, $v0, $s2
    ctx->pc = 0x2ca488u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x2ca48c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ca490:
    // 0x2ca490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca494: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca498: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ca498u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca49c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ca49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ca4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4A0u;
        // 0x2ca4a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA4A8u;
}
