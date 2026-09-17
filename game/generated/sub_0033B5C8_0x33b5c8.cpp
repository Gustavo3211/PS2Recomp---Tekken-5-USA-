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

// Function: sub_0033B5C8
// Address: 0x33b5c8 - 0x33b760
void sub_0033B5C8_0x33b5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B5C8_0x33b5c8");
#endif

    switch (ctx->pc) {
        case 0x33b638u: goto label_33b638;
        case 0x33b6f4u: goto label_33b6f4;
        case 0x33b70cu: goto label_33b70c;
        default: break;
    }

    ctx->pc = 0x33b5c8u;

    // 0x33b5c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33b5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33b5cc: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x33b5ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b5d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33b5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x33b5d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33b5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b5d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33b5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x33b5dc: 0x25660014  addiu       $a2, $t3, 0x14
    ctx->pc = 0x33b5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x33b5e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33b5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33b5e4: 0x27aa0004  addiu       $t2, $sp, 0x4
    ctx->pc = 0x33b5e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x33b5e8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x33b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33b5ec: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x33b5ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x33b5f0: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x33b5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x33b5f4: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x33b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x33b5f8: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x33b5f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33b5fc: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x33b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x33b600: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x33b600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x33b604: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x33b604u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x33b608: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x33b608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x33b60c: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x33b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x33b610: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x33b610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b614: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x33b614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x33b618: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x33b618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b61c: 0x10a2004a  beq         $a1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x33B61Cu;
    {
        const bool branch_taken_0x33b61c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B61Cu;
        // 0x33b620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b61c) {
            ctx->pc = 0x33B748u;
            goto label_33b748;
        }
    }
    ctx->pc = 0x33B624u;
    // 0x33b624: 0x25630028  addiu       $v1, $t3, 0x28
    ctx->pc = 0x33b624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
    // 0x33b628: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x33b628u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b62c: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x33b62cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x33b630: 0x24a70008  addiu       $a3, $a1, 0x8
    ctx->pc = 0x33b630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x33b634: 0x0  nop
    ctx->pc = 0x33b634u;
    // NOP
label_33b638:
    // 0x33b638: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x33b638u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x33b63c: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x33b63cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33b640: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x33B640u;
    {
        const bool branch_taken_0x33b640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b640) {
            ctx->pc = 0x33B644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B640u;
            // 0x33b644: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B728u;
            goto label_33b728;
        }
    }
    ctx->pc = 0x33B648u;
    // 0x33b648: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x33b648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b64c: 0x50c30008  beql        $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33B64Cu;
    {
        const bool branch_taken_0x33b64c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x33b64c) {
            ctx->pc = 0x33B650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B64Cu;
            // 0x33b650: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B670u;
            goto label_33b670;
        }
    }
    ctx->pc = 0x33B654u;
    // 0x33b654: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33b658: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x33b658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33b65c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b65cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33b660: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x33b660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33b664: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x33b664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33b668: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x33b668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x33b66c: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x33b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_33b670:
    // 0x33b670: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x33b670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b674: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x33b674u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x33b678: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x33b678u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x33b67c: 0xa4c2000a  sh          $v0, 0xA($a2)
    ctx->pc = 0x33b67cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x33b680: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x33b680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33b684: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x33b684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x33b688: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x33b688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x33b68c: 0xa4c20008  sh          $v0, 0x8($a2)
    ctx->pc = 0x33b68cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x33b690: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x33b690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33b694: 0xa468000a  sh          $t0, 0xA($v1)
    ctx->pc = 0x33b694u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 8));
    // 0x33b698: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x33b698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33b69c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x33b69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x33b6a0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x33b6a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b6a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b6a8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x33b6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x33b6ac: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x33b6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x33b6b0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x33b6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x33b6b4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x33b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33b6b8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x33b6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x33b6bc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x33b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33b6c0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x33b6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x33b6c4: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x33b6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x33b6c8: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x33b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x33b6cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x33b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b6d0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x33b6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b6d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33b6d8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x33b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x33b6dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b6e0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x33b6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33b6e4: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x33b6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x33b6e8: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x33b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x33b6ec: 0xc0ced50  jal         func_33B540
    ctx->pc = 0x33B6ECu;
    SET_GPR_U32(ctx, 31, 0x33B6F4u);
    ctx->pc = 0x33B6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B6ECu;
    // 0x33b6f0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B540u, 0x33B6ECu, 0x33B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B6F4u;
label_33b6f4:
    // 0x33b6f4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x33b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x33b6f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x33b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b6fc: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x33b6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x33b700: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33b700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b704: 0xc0cf25c  jal         func_33C970
    ctx->pc = 0x33B704u;
    SET_GPR_U32(ctx, 31, 0x33B70Cu);
    ctx->pc = 0x33B708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B704u;
    // 0x33b708: 0xac50000c  sw          $s0, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C970u, 0x33B704u, 0x33B70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B70Cu;
label_33b70c:
    // 0x33b70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b710: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x33b710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b714: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x33b714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33b718: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x33b718u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33b71c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x33b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x33b720: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33B720u;
    {
        const bool branch_taken_0x33b720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B720u;
        // 0x33b724: 0xa4a30014  sh          $v1, 0x14($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b720) {
            ctx->pc = 0x33B748u;
            goto label_33b748;
        }
    }
    ctx->pc = 0x33B728u;
label_33b728:
    // 0x33b728: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x33b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33b72c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x33b72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x33b730: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x33b730u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x33b734: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x33b734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x33b738: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x33b738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b73c: 0x14a2ffbe  bne         $a1, $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x33B73Cu;
    {
        const bool branch_taken_0x33b73c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x33B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B73Cu;
        // 0x33b740: 0x24a70008  addiu       $a3, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b73c) {
            ctx->pc = 0x33B638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b638;
        }
    }
    ctx->pc = 0x33B744u;
    // 0x33b744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33b744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b748:
    // 0x33b748: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33b748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b74c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33b74cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33b750: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33b750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b754: 0x3e00008  jr          $ra
    ctx->pc = 0x33B754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B754u;
        // 0x33b758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B75Cu;
    // 0x33b75c: 0x0  nop
    ctx->pc = 0x33b75cu;
    // NOP
    ctx->pc = 0x33b760u;
}
