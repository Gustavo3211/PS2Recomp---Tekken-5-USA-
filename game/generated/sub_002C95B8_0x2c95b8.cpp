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

// Function: sub_002C95B8
// Address: 0x2c95b8 - 0x2c96f0
void sub_002C95B8_0x2c95b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C95B8_0x2c95b8");
#endif

    switch (ctx->pc) {
        case 0x2c9608u: goto label_2c9608;
        case 0x2c9640u: goto label_2c9640;
        case 0x2c9654u: goto label_2c9654;
        case 0x2c9664u: goto label_2c9664;
        default: break;
    }

    ctx->pc = 0x2c95b8u;

    // 0x2c95b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c95b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c95bc: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2c95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2c95c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c95c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2c95c4: 0x24558d38  addiu       $s5, $v0, -0x72C8
    ctx->pc = 0x2c95c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937912));
    // 0x2c95c8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c95c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2c95cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c95ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c95d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c95d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c95d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c95d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c95d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c95d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2c95dc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2c95dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2c95e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c95e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c95e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c95e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c95e8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2c95e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2c95ec: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2c95ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c95f0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2c95f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2c95f4: 0x26b7ffd8  addiu       $s7, $s5, -0x28
    ctx->pc = 0x2c95f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967256));
    // 0x2c95f8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2c95f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2c95fc: 0x247e88d0  addiu       $fp, $v1, -0x7730
    ctx->pc = 0x2c95fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x2c9600: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2c9600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2c9604: 0x0  nop
    ctx->pc = 0x2c9604u;
    // NOP
label_2c9608:
    // 0x2c9608: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x2c9608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x2c960c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c960cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c9610: 0x24848dc8  addiu       $a0, $a0, -0x7238
    ctx->pc = 0x2c9610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938056));
    // 0x2c9614: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c9614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c9618: 0x2e140001  sltiu       $s4, $s0, 0x1
    ctx->pc = 0x2c9618u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c961c: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x2c961cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c9620: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x2c9620u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c9624: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2c9624u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x2c9628: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x2c9628u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c962c: 0x2551821  addu        $v1, $s2, $s5
    ctx->pc = 0x2c962cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x2c9630: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2c9630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c9634: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c9634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9638: 0xc0b271c  jal         func_2C9C70
    ctx->pc = 0x2C9638u;
    SET_GPR_U32(ctx, 31, 0x2C9640u);
    ctx->pc = 0x2C963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9638u;
    // 0x2c963c: 0x448821  addu        $s1, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9C70u, 0x2C9638u, 0x2C9640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9640u;
label_2c9640:
    // 0x2c9640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9644: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C9644u;
    {
        const bool branch_taken_0x2c9644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9644u;
        // 0x2c9648: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9644) {
            ctx->pc = 0x2C96ACu;
            goto label_2c96ac;
        }
    }
    ctx->pc = 0x2C964Cu;
    // 0x2c964c: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C964Cu;
    SET_GPR_U32(ctx, 31, 0x2C9654u);
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C964Cu, 0x2C9654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9654u;
label_2c9654:
    // 0x2c9654: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C9654u;
    {
        const bool branch_taken_0x2c9654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9654) {
            ctx->pc = 0x2C9658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9654u;
            // 0x2c9658: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C96B0u;
            goto label_2c96b0;
        }
    }
    ctx->pc = 0x2C965Cu;
    // 0x2c965c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2C965Cu;
    SET_GPR_U32(ctx, 31, 0x2C9664u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2C965Cu, 0x2C9664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9664u;
label_2c9664:
    // 0x2c9664: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2c9664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2c9668: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2c9668u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2c966c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2c966cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2c9670: 0x5e2821  addu        $a1, $v0, $fp
    ctx->pc = 0x2c9670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2c9674: 0x1810  mfhi        $v1
    ctx->pc = 0x2c9674u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2c9678: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C9678u;
    {
        const bool branch_taken_0x2c9678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9678u;
        // 0x2c967c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9678) {
            ctx->pc = 0x2C969Cu;
            goto label_2c969c;
        }
    }
    ctx->pc = 0x2C9680u;
    // 0x2c9680: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2c9680u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2c9684: 0x1010  mfhi        $v0
    ctx->pc = 0x2c9684u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2c9688: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9688u;
    {
        const bool branch_taken_0x2c9688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9688u;
        // 0x2c968c: 0x2571021  addu        $v0, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9688) {
            ctx->pc = 0x2C969Cu;
            goto label_2c969c;
        }
    }
    ctx->pc = 0x2C9690u;
    // 0x2c9690: 0x90430040  lbu         $v1, 0x40($v0)
    ctx->pc = 0x2c9690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2c9694: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9694u;
    {
        const bool branch_taken_0x2c9694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9694u;
        // 0x2c9698: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9694) {
            ctx->pc = 0x2C96B0u;
            goto label_2c96b0;
        }
    }
    ctx->pc = 0x2C969Cu;
label_2c969c:
    // 0x2c969c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2c969cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c96a0: 0x904201bc  lbu         $v0, 0x1BC($v0)
    ctx->pc = 0x2c96a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x2c96a4: 0x50560001  beql        $v0, $s6, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C96A4u;
    {
        const bool branch_taken_0x2c96a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x2c96a4) {
            ctx->pc = 0x2C96A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C96A4u;
            // 0x2c96a8: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C96ACu;
            goto label_2c96ac;
        }
    }
    ctx->pc = 0x2C96ACu;
label_2c96ac:
    // 0x2c96ac: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2c96acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_2c96b0:
    // 0x2c96b0: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2C96B0u;
    {
        const bool branch_taken_0x2c96b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c96b0) {
            ctx->pc = 0x2C96B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C96B0u;
            // 0x2c96b4: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9608;
        }
    }
    ctx->pc = 0x2C96B8u;
    // 0x2c96b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c96b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c96bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c96bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c96c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c96c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c96c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c96c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c96c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c96c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c96cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c96ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c96d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2c96d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c96d4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2c96d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c96d8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2c96d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c96dc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2c96dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c96e0: 0xaf80cb1c  sw          $zero, -0x34E4($gp)
    ctx->pc = 0x2c96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953756), GPR_U32(ctx, 0));
    // 0x2c96e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C96E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C96E4u;
        // 0x2c96e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C96E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C96ECu;
    // 0x2c96ec: 0x0  nop
    ctx->pc = 0x2c96ecu;
    // NOP
    ctx->pc = 0x2c96f0u;
}
