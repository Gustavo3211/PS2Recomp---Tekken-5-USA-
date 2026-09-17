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

// Function: sub_002CA7B8
// Address: 0x2ca7b8 - 0x2ca860
void sub_002CA7B8_0x2ca7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA7B8_0x2ca7b8");
#endif

    switch (ctx->pc) {
        case 0x2ca7d4u: goto label_2ca7d4;
        default: break;
    }

    ctx->pc = 0x2ca7b8u;

    // 0x2ca7b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca7bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca7c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ca7c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca7c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ca7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ca7c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ca7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ca7cc: 0xc0b2a76  jal         func_2CA9D8
    ctx->pc = 0x2CA7CCu;
    SET_GPR_U32(ctx, 31, 0x2CA7D4u);
    ctx->pc = 0x2CA7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7CCu;
    // 0x2ca7d0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9D8u, 0x2CA7CCu, 0x2CA7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7D4u;
label_2ca7d4:
    // 0x2ca7d4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2ca7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ca7d8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2ca7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2ca7dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ca7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ca7e0: 0x8f82bb18  lw          $v0, -0x44E8($gp)
    ctx->pc = 0x2ca7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2ca7e4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ca7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ca7e8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2ca7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2ca7ec: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2ca7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ca7f0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CA7F0u;
    {
        const bool branch_taken_0x2ca7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7F0u;
        // 0x2ca7f4: 0x441821  addu        $v1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7f0) {
            ctx->pc = 0x2CA84Cu;
            goto label_2ca84c;
        }
    }
    ctx->pc = 0x2CA7F8u;
    // 0x2ca7f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ca7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ca7fc: 0x6200010  bltz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CA7FCu;
    {
        const bool branch_taken_0x2ca7fc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2CA800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7FCu;
        // 0x2ca800: 0x246603a4  addiu       $a2, $v1, 0x3A4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 932));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7fc) {
            ctx->pc = 0x2CA840u;
            goto label_2ca840;
        }
    }
    ctx->pc = 0x2CA804u;
    // 0x2ca804: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2ca804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ca808: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA808u;
    {
        const bool branch_taken_0x2ca808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA808u;
        // 0x2ca80c: 0x711821  addu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca808) {
            ctx->pc = 0x2CA828u;
            goto label_2ca828;
        }
    }
    ctx->pc = 0x2CA810u;
    // 0x2ca810: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x2ca810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ca814: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2CA814u;
    {
        const bool branch_taken_0x2ca814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca814) {
            ctx->pc = 0x2CA818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA814u;
            // 0x2ca818: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA844u;
            goto label_2ca844;
        }
    }
    ctx->pc = 0x2CA81Cu;
    // 0x2ca81c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA81Cu;
    {
        const bool branch_taken_0x2ca81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA81Cu;
        // 0x2ca820: 0x2261821  addu        $v1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca81c) {
            ctx->pc = 0x2CA838u;
            goto label_2ca838;
        }
    }
    ctx->pc = 0x2CA824u;
    // 0x2ca824: 0x0  nop
    ctx->pc = 0x2ca824u;
    // NOP
label_2ca828:
    // 0x2ca828: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ca828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ca82c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA82Cu;
    {
        const bool branch_taken_0x2ca82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA82Cu;
        // 0x2ca830: 0xa06203ac  sb          $v0, 0x3AC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 940), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca82c) {
            ctx->pc = 0x2CA840u;
            goto label_2ca840;
        }
    }
    ctx->pc = 0x2CA834u;
    // 0x2ca834: 0x0  nop
    ctx->pc = 0x2ca834u;
    // NOP
label_2ca838:
    // 0x2ca838: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ca838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ca83c: 0xa062000b  sb          $v0, 0xB($v1)
    ctx->pc = 0x2ca83cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 2));
label_2ca840:
    // 0x2ca840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ca844:
    // 0x2ca844: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2ca844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2ca848: 0xac434520  sw          $v1, 0x4520($v0)
    ctx->pc = 0x2ca848u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E4520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E4520u, _value); } while (0);
label_2ca84c:
    // 0x2ca84c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca858: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA858u;
        // 0x2ca85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA860u;
}
