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

// Function: sub_002A5628
// Address: 0x2a5628 - 0x2a5920
void sub_002A5628_0x2a5628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5628_0x2a5628");
#endif

    switch (ctx->pc) {
        case 0x2a56a8u: goto label_2a56a8;
        case 0x2a56d8u: goto label_2a56d8;
        case 0x2a56e4u: goto label_2a56e4;
        case 0x2a5728u: goto label_2a5728;
        case 0x2a574cu: goto label_2a574c;
        case 0x2a5758u: goto label_2a5758;
        case 0x2a578cu: goto label_2a578c;
        case 0x2a57b4u: goto label_2a57b4;
        case 0x2a57e0u: goto label_2a57e0;
        case 0x2a580cu: goto label_2a580c;
        case 0x2a5838u: goto label_2a5838;
        case 0x2a5864u: goto label_2a5864;
        case 0x2a5890u: goto label_2a5890;
        case 0x2a58bcu: goto label_2a58bc;
        case 0x2a58e8u: goto label_2a58e8;
        default: break;
    }

    ctx->pc = 0x2a5628u;

    // 0x2a5628: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a5628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a562c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2a562cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2a5630: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a5630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5634: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2a5634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2a5638: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x2a5638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x2a563c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2a563cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2a5640: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2a5640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2a5644: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2a5644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2a5648: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2a5648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2a564c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2a564cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2a5650: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2a5650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2a5654: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2a5654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2a5658: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2a5658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2a565c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2a565cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a5660: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5660u;
    {
        const bool branch_taken_0x2a5660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5660) {
            ctx->pc = 0x2A5664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5660u;
            // 0x2a5664: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A567Cu;
            goto label_2a567c;
        }
    }
    ctx->pc = 0x2A5668u;
    // 0x2a5668: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2a5668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a566c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a5670: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5670u;
    {
        const bool branch_taken_0x2a5670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5670u;
        // 0x2a5674: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5670) {
            ctx->pc = 0x2A5684u;
            goto label_2a5684;
        }
    }
    ctx->pc = 0x2A5678u;
    // 0x2a5678: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a5678u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2a567c:
    // 0x2a567c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a567cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5680: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2a5680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2a5684:
    // 0x2a5684: 0x12400099  beqz        $s2, . + 4 + (0x99 << 2)
    ctx->pc = 0x2A5684u;
    {
        const bool branch_taken_0x2a5684 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5684u;
        // 0x2a5688: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5684) {
            ctx->pc = 0x2A58ECu;
            goto label_2a58ec;
        }
    }
    ctx->pc = 0x2A568Cu;
    // 0x2a568c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a568cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5690: 0x244242b0  addiu       $v0, $v0, 0x42B0
    ctx->pc = 0x2a5690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17072));
    // 0x2a5694: 0x26750008  addiu       $s5, $s3, 0x8
    ctx->pc = 0x2a5694u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2a5698: 0x90570006  lbu         $s7, 0x6($v0)
    ctx->pc = 0x2a5698u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2a569c: 0x241eefff  addiu       $fp, $zero, -0x1001
    ctx->pc = 0x2a569cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a56a0: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x2a56a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a56a4: 0x94540004  lhu         $s4, 0x4($v0)
    ctx->pc = 0x2a56a4u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_2a56a8:
    // 0x2a56a8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a56a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a56ac: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2a56acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a56b0: 0x2463ccc8  addiu       $v1, $v1, -0x3338
    ctx->pc = 0x2a56b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954184));
    // 0x2a56b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a56b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a56b8: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x2a56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2a56bc: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x2a56bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2a56c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a56c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a56c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a56c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a56c8: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x2a56c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x2a56cc: 0xa7b40004  sh          $s4, 0x4($sp)
    ctx->pc = 0x2a56ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 20));
    // 0x2a56d0: 0xc04a38c  jal         func_128E30
    ctx->pc = 0x2A56D0u;
    SET_GPR_U32(ctx, 31, 0x2A56D8u);
    ctx->pc = 0x2A56D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A56D0u;
    // 0x2a56d4: 0xa3b70006  sb          $s7, 0x6($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128E30u, 0x2A56D0u, 0x2A56D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A56D8u;
label_2a56d8:
    // 0x2a56d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a56d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a56dc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A56DCu;
    SET_GPR_U32(ctx, 31, 0x2A56E4u);
    ctx->pc = 0x2A56E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A56DCu;
    // 0x2a56e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A56DCu, 0x2A56E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A56E4u;
label_2a56e4:
    // 0x2a56e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a56e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a56e8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A56E8u;
    {
        const bool branch_taken_0x2a56e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A56E8u;
        // 0x2a56ec: 0x2a24001e  slti        $a0, $s1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a56e8) {
            ctx->pc = 0x2A56FCu;
            goto label_2a56fc;
        }
    }
    ctx->pc = 0x2A56F0u;
    // 0x2a56f0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a56f4: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x2a56f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x2a56f8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a56f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2a56fc:
    // 0x2a56fc: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x2a56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x2a5700: 0x1480ffe9  bnez        $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2A5700u;
    {
        const bool branch_taken_0x2a5700 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5700u;
        // 0x2a5704: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5700) {
            ctx->pc = 0x2A56A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a56a8;
        }
    }
    ctx->pc = 0x2A5708u;
    // 0x2a5708: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2a5708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2a570c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a570cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a5710: 0x244242b8  addiu       $v0, $v0, 0x42B8
    ctx->pc = 0x2a5710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17080));
    // 0x2a5714: 0x2477cd40  addiu       $s7, $v1, -0x32C0
    ctx->pc = 0x2a5714u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954304));
    // 0x2a5718: 0x94550004  lhu         $s5, 0x4($v0)
    ctx->pc = 0x2a5718u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)FAST_READ16(0x1542BCu));
    // 0x2a571c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a571cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5720: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2a5720u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x1542B8u));
    // 0x2a5724: 0x2416efff  addiu       $s6, $zero, -0x1001
    ctx->pc = 0x2a5724u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2a5728:
    // 0x2a5728: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2a5728u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a572c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a572cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a5730: 0x2171021  addu        $v0, $s0, $s7
    ctx->pc = 0x2a5730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x2a5734: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x2a5734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2a5738: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a5738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a573c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a573cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5740: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x2a5740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x2a5744: 0xc04a38c  jal         func_128E30
    ctx->pc = 0x2A5744u;
    SET_GPR_U32(ctx, 31, 0x2A574Cu);
    ctx->pc = 0x2A5748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5744u;
    // 0x2a5748: 0xa7b50004  sh          $s5, 0x4($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128E30u, 0x2A5744u, 0x2A574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A574Cu;
label_2a574c:
    // 0x2a574c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a574cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5750: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5750u;
    SET_GPR_U32(ctx, 31, 0x2A5758u);
    ctx->pc = 0x2A5754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5750u;
    // 0x2a5754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5750u, 0x2A5758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5758u;
label_2a5758:
    // 0x2a5758: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5758u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a575c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A575Cu;
    {
        const bool branch_taken_0x2a575c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A575Cu;
        // 0x2a5760: 0x2a24001e  slti        $a0, $s1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a575c) {
            ctx->pc = 0x2A5770u;
            goto label_2a5770;
        }
    }
    ctx->pc = 0x2A5764u;
    // 0x2a5764: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a5764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a5768: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2a5768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2a576c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a576cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2a5770:
    // 0x2a5770: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x2a5770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x2a5774: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2A5774u;
    {
        const bool branch_taken_0x2a5774 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5774u;
        // 0x2a5778: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5774) {
            ctx->pc = 0x2A5728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5728;
        }
    }
    ctx->pc = 0x2A577Cu;
    // 0x2a577c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a577cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a5780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a5780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5784: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5784u;
    SET_GPR_U32(ctx, 31, 0x2A578Cu);
    ctx->pc = 0x2A5788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5784u;
    // 0x2a5788: 0x24a5db00  addiu       $a1, $a1, -0x2500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5784u, 0x2A578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A578Cu;
label_2a578c:
    // 0x2a578c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a578cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5790: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5790u;
    {
        const bool branch_taken_0x2a5790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5790u;
        // 0x2a5794: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5790) {
            ctx->pc = 0x2A57A4u;
            goto label_2a57a4;
        }
    }
    ctx->pc = 0x2A5798u;
    // 0x2a5798: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a5798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a579c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a579cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a57a0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a57a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a57a4:
    // 0x2a57a4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a57a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a57a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a57a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a57ac: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A57ACu;
    SET_GPR_U32(ctx, 31, 0x2A57B4u);
    ctx->pc = 0x2A57B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A57ACu;
    // 0x2a57b0: 0x24a5db10  addiu       $a1, $a1, -0x24F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A57ACu, 0x2A57B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A57B4u;
label_2a57b4:
    // 0x2a57b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a57b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a57b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A57B8u;
    {
        const bool branch_taken_0x2a57b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A57B8u;
        // 0x2a57bc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a57b8) {
            ctx->pc = 0x2A57CCu;
            goto label_2a57cc;
        }
    }
    ctx->pc = 0x2A57C0u;
    // 0x2a57c0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a57c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a57c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a57c8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a57c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a57cc:
    // 0x2a57cc: 0xae640148  sw          $a0, 0x148($s3)
    ctx->pc = 0x2a57ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 328), GPR_U32(ctx, 4));
    // 0x2a57d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a57d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a57d4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a57d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a57d8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A57D8u;
    SET_GPR_U32(ctx, 31, 0x2A57E0u);
    ctx->pc = 0x2A57DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A57D8u;
    // 0x2a57dc: 0x24a5db28  addiu       $a1, $a1, -0x24D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A57D8u, 0x2A57E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A57E0u;
label_2a57e0:
    // 0x2a57e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a57e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a57e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A57E4u;
    {
        const bool branch_taken_0x2a57e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A57E4u;
        // 0x2a57e8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a57e4) {
            ctx->pc = 0x2A57F8u;
            goto label_2a57f8;
        }
    }
    ctx->pc = 0x2A57ECu;
    // 0x2a57ec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a57f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a57f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a57f4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a57f8:
    // 0x2a57f8: 0xae64014c  sw          $a0, 0x14C($s3)
    ctx->pc = 0x2a57f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 332), GPR_U32(ctx, 4));
    // 0x2a57fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a57fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5800: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a5800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a5804: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5804u;
    SET_GPR_U32(ctx, 31, 0x2A580Cu);
    ctx->pc = 0x2A5808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5804u;
    // 0x2a5808: 0x24a5db48  addiu       $a1, $a1, -0x24B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5804u, 0x2A580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A580Cu;
label_2a580c:
    // 0x2a580c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a580cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5810: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5810u;
    {
        const bool branch_taken_0x2a5810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5810u;
        // 0x2a5814: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5810) {
            ctx->pc = 0x2A5824u;
            goto label_2a5824;
        }
    }
    ctx->pc = 0x2A5818u;
    // 0x2a5818: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a5818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a581c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a581cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5820: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a5820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a5824:
    // 0x2a5824: 0xae640150  sw          $a0, 0x150($s3)
    ctx->pc = 0x2a5824u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 4));
    // 0x2a5828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a5828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a582c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a582cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a5830: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5830u;
    SET_GPR_U32(ctx, 31, 0x2A5838u);
    ctx->pc = 0x2A5834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5830u;
    // 0x2a5834: 0x24a5db60  addiu       $a1, $a1, -0x24A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5830u, 0x2A5838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5838u;
label_2a5838:
    // 0x2a5838: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5838u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a583c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A583Cu;
    {
        const bool branch_taken_0x2a583c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a583c) {
            ctx->pc = 0x2A5840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A583Cu;
            // 0x2a5840: 0xae630154  sw          $v1, 0x154($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 340), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5854u;
            goto label_2a5854;
        }
    }
    ctx->pc = 0x2A5844u;
    // 0x2a5844: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a5844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a5848: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a5848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a584c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a584cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a5850: 0xae630154  sw          $v1, 0x154($s3)
    ctx->pc = 0x2a5850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 340), GPR_U32(ctx, 3));
label_2a5854:
    // 0x2a5854: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a5854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a5858: 0x24a5db70  addiu       $a1, $a1, -0x2490
    ctx->pc = 0x2a5858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957936));
    // 0x2a585c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A585Cu;
    SET_GPR_U32(ctx, 31, 0x2A5864u);
    ctx->pc = 0x2A5860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A585Cu;
    // 0x2a5860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A585Cu, 0x2A5864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5864u;
label_2a5864:
    // 0x2a5864: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a5864u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5868: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5868u;
    {
        const bool branch_taken_0x2a5868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5868) {
            ctx->pc = 0x2A586Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5868u;
            // 0x2a586c: 0xae630158  sw          $v1, 0x158($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5880u;
            goto label_2a5880;
        }
    }
    ctx->pc = 0x2A5870u;
    // 0x2a5870: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a5870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a5874: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a5874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a5878: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a5878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a587c: 0xae630158  sw          $v1, 0x158($s3)
    ctx->pc = 0x2a587cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 3));
label_2a5880:
    // 0x2a5880: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a5880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a5884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a5884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5888: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A5888u;
    SET_GPR_U32(ctx, 31, 0x2A5890u);
    ctx->pc = 0x2A588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5888u;
    // 0x2a588c: 0x24a5db80  addiu       $a1, $a1, -0x2480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A5888u, 0x2A5890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5890u;
label_2a5890:
    // 0x2a5890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5894: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5894u;
    {
        const bool branch_taken_0x2a5894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5894u;
        // 0x2a5898: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5894) {
            ctx->pc = 0x2A58A8u;
            goto label_2a58a8;
        }
    }
    ctx->pc = 0x2A589Cu;
    // 0x2a589c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a58a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a58a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a58a4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a58a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a58a8:
    // 0x2a58a8: 0xae64015c  sw          $a0, 0x15C($s3)
    ctx->pc = 0x2a58a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 348), GPR_U32(ctx, 4));
    // 0x2a58ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a58acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58b0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a58b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a58b4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A58B4u;
    SET_GPR_U32(ctx, 31, 0x2A58BCu);
    ctx->pc = 0x2A58B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A58B4u;
    // 0x2a58b8: 0x24a5db90  addiu       $a1, $a1, -0x2470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A58B4u, 0x2A58BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58BCu;
label_2a58bc:
    // 0x2a58bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a58bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A58C0u;
    {
        const bool branch_taken_0x2a58c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A58C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A58C0u;
        // 0x2a58c4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a58c0) {
            ctx->pc = 0x2A58D4u;
            goto label_2a58d4;
        }
    }
    ctx->pc = 0x2A58C8u;
    // 0x2a58c8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a58cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a58ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a58d0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a58d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a58d4:
    // 0x2a58d4: 0xae640160  sw          $a0, 0x160($s3)
    ctx->pc = 0x2a58d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 4));
    // 0x2a58d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a58d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58dc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a58dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a58e0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A58E0u;
    SET_GPR_U32(ctx, 31, 0x2A58E8u);
    ctx->pc = 0x2A58E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A58E0u;
    // 0x2a58e4: 0x24a5dba0  addiu       $a1, $a1, -0x2460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A58E0u, 0x2A58E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58E8u;
label_2a58e8:
    // 0x2a58e8: 0xae620164  sw          $v0, 0x164($s3)
    ctx->pc = 0x2a58e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 356), GPR_U32(ctx, 2));
label_2a58ec:
    // 0x2a58ec: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2a58ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a58f0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2a58f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a58f4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2a58f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a58f8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2a58f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a58fc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2a58fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a5900: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2a5900u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a5904: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2a5904u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a5908: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2a5908u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a590c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2a590cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a5910: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2a5910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a5914: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5914u;
        // 0x2a5918: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A591Cu;
    // 0x2a591c: 0x0  nop
    ctx->pc = 0x2a591cu;
    // NOP
    ctx->pc = 0x2a5920u;
}
