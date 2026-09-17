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

// Function: sub_00260098
// Address: 0x260098 - 0x260198
void sub_00260098_0x260098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260098_0x260098");
#endif

    switch (ctx->pc) {
        case 0x260110u: goto label_260110;
        case 0x260118u: goto label_260118;
        case 0x260168u: goto label_260168;
        default: break;
    }

    ctx->pc = 0x260098u;

    // 0x260098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x260098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26009c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26009cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2600a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2600a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2600a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2600a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2600a8: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x2600a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2600ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2600acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2600b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2600b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2600b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2600b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2600b8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2600b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2600bc: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2600bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2600c0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2600c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2600c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2600c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2600c8: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2600c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2600cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2600ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2600d0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2600d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2600d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2600d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2600d8: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x2600d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x2600dc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2600dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2600e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2600e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2600e4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2600e4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2600e8: 0x2010  mfhi        $a0
    ctx->pc = 0x2600e8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2600ec: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2600ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x2600f0: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x2600f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2600f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2600f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2600f8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2600f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2600fc: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2600fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x260100: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x260100u;
    {
        const bool branch_taken_0x260100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260100u;
        // 0x260104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260100) {
            ctx->pc = 0x260180u;
            goto label_260180;
        }
    }
    ctx->pc = 0x260108u;
    // 0x260108: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x260108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26010c: 0x0  nop
    ctx->pc = 0x26010cu;
    // NOP
label_260110:
    // 0x260110: 0xc097fdc  jal         func_25FF70
    ctx->pc = 0x260110u;
    SET_GPR_U32(ctx, 31, 0x260118u);
    ctx->pc = 0x260114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260110u;
    // 0x260114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x260110u, 0x260118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260118u;
label_260118:
    // 0x260118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26011c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x26011cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x260120: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x260120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x260124: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x260124u;
    {
        const bool branch_taken_0x260124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x260128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260124u;
        // 0x260128: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260124) {
            ctx->pc = 0x260160u;
            goto label_260160;
        }
    }
    ctx->pc = 0x26012Cu;
    // 0x26012c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26012cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x260130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x260130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260134: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x260134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x260138: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x260138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x26013c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x26013cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x260140: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x260140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x260144: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x260144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x260148: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x260148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x26014c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26014cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x260150: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x260150u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x260154: 0x2810  mfhi        $a1
    ctx->pc = 0x260154u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x260158: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x260158u;
    {
        const bool branch_taken_0x260158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260158u;
        // 0x26015c: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260158) {
            ctx->pc = 0x260180u;
            goto label_260180;
        }
    }
    ctx->pc = 0x260160u;
label_260160:
    // 0x260160: 0xc098012  jal         func_260048
    ctx->pc = 0x260160u;
    SET_GPR_U32(ctx, 31, 0x260168u);
    ctx->pc = 0x260164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260160u;
    // 0x260164: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260048u, 0x260160u, 0x260168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260168u;
label_260168:
    // 0x260168: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x260168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26016c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x260170: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x260170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x260174: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x260174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x260178: 0x1060ffe5  beqz        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x260178u;
    {
        const bool branch_taken_0x260178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260178u;
        // 0x26017c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260178) {
            ctx->pc = 0x260110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260110;
        }
    }
    ctx->pc = 0x260180u;
label_260180:
    // 0x260180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260184: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x260184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x260188: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x260188u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26018c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x26018cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x260190: 0x3e00008  jr          $ra
    ctx->pc = 0x260190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260190u;
        // 0x260194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260198u;
}
