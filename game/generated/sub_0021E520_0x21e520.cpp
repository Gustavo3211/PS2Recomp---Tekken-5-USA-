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

// Function: sub_0021E520
// Address: 0x21e520 - 0x21e5b8
void sub_0021E520_0x21e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E520_0x21e520");
#endif

    switch (ctx->pc) {
        case 0x21e588u: goto label_21e588;
        default: break;
    }

    ctx->pc = 0x21e520u;

    // 0x21e520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e52c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21e52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e530: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21e530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21e534: 0x9090002b  lbu         $s0, 0x2B($a0)
    ctx->pc = 0x21e534u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 43)));
    // 0x21e538: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21E538u;
    {
        const bool branch_taken_0x21e538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x21E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E538u;
        // 0x21e53c: 0x2a030002  slti        $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e538) {
            ctx->pc = 0x21E560u;
            goto label_21e560;
        }
    }
    ctx->pc = 0x21E540u;
    // 0x21e540: 0x54600018  bnel        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x21E540u;
    {
        const bool branch_taken_0x21e540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e540) {
            ctx->pc = 0x21E544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E540u;
            // 0x21e544: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E5A4u;
            goto label_21e5a4;
        }
    }
    ctx->pc = 0x21E548u;
    // 0x21e548: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21e548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e54c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21E54Cu;
    {
        const bool branch_taken_0x21e54c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x21E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E54Cu;
        // 0x21e550: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e54c) {
            ctx->pc = 0x21E598u;
            goto label_21e598;
        }
    }
    ctx->pc = 0x21E554u;
    // 0x21e554: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x21E554u;
    {
        const bool branch_taken_0x21e554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E554u;
        // 0x21e558: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e554) {
            ctx->pc = 0x21E5A8u;
            goto label_21e5a8;
        }
    }
    ctx->pc = 0x21E55Cu;
    // 0x21e55c: 0x0  nop
    ctx->pc = 0x21e55cu;
    // NOP
label_21e560:
    // 0x21e560: 0x9082002d  lbu         $v0, 0x2D($a0)
    ctx->pc = 0x21e560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x21e564: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E564u;
    {
        const bool branch_taken_0x21e564 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E564u;
        // 0x21e568: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e564) {
            ctx->pc = 0x21E580u;
            goto label_21e580;
        }
    }
    ctx->pc = 0x21E56Cu;
    // 0x21e56c: 0xb02004  sllv        $a0, $s0, $a1
    ctx->pc = 0x21e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
    // 0x21e570: 0x8c4388a8  lw          $v1, -0x7758($v0)
    ctx->pc = 0x21e570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936744)));
    // 0x21e574: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x21e574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x21e578: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21E578u;
    {
        const bool branch_taken_0x21e578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E578u;
        // 0x21e57c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e578) {
            ctx->pc = 0x21E5A0u;
            goto label_21e5a0;
        }
    }
    ctx->pc = 0x21E580u;
label_21e580:
    // 0x21e580: 0xc0821d0  jal         func_208740
    ctx->pc = 0x21E580u;
    SET_GPR_U32(ctx, 31, 0x21E588u);
    ctx->pc = 0x208740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208740u, 0x21E580u, 0x21E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E588u;
label_21e588:
    // 0x21e588: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21e588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21e58c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21e58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e590: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21E590u;
    {
        const bool branch_taken_0x21e590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E590u;
        // 0x21e594: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e590) {
            ctx->pc = 0x21E5A0u;
            goto label_21e5a0;
        }
    }
    ctx->pc = 0x21E598u;
label_21e598:
    // 0x21e598: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x21e598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21e59c: 0x5300b  movn        $a2, $zero, $a1
    ctx->pc = 0x21e59cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_21e5a0:
    // 0x21e5a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e5a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21e5a4:
    // 0x21e5a4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x21e5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21e5a8:
    // 0x21e5a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21e5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x21E5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5ACu;
        // 0x21e5b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E5B4u;
    // 0x21e5b4: 0x0  nop
    ctx->pc = 0x21e5b4u;
    // NOP
    ctx->pc = 0x21e5b8u;
}
