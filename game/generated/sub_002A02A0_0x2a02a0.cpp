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

// Function: sub_002A02A0
// Address: 0x2a02a0 - 0x2a0460
void sub_002A02A0_0x2a02a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A02A0_0x2a02a0");
#endif

    switch (ctx->pc) {
        case 0x2a02d8u: goto label_2a02d8;
        case 0x2a0338u: goto label_2a0338;
        case 0x2a03d0u: goto label_2a03d0;
        default: break;
    }

    ctx->pc = 0x2a02a0u;

    // 0x2a02a0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a02a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02a4: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x2a02a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x2a02a8: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x2a02a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x2a02ac: 0x24ea000c  addiu       $t2, $a3, 0xC
    ctx->pc = 0x2a02acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2a02b0: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x2a02b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02b4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2a02b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a02b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a02bc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2a02bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2a02c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a02c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a02c4: 0x9484840c  lhu         $a0, -0x7BF4($a0)
    ctx->pc = 0x2a02c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294935564)));
    // 0x2a02c8: 0xace00054  sw          $zero, 0x54($a3)
    ctx->pc = 0x2a02c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 0));
    // 0x2a02cc: 0x288203e8  slti        $v0, $a0, 0x3E8
    ctx->pc = 0x2a02ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2a02d0: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2a02d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x2a02d4: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x2a02d4u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2a02d8:
    // 0x2a02d8: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x2a02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x2a02dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a02e0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2a02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a02e4: 0x1810  mfhi        $v1
    ctx->pc = 0x2a02e4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2a02e8: 0x2812  mflo        $a1
    ctx->pc = 0x2a02e8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2a02ec: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x2a02ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x2a02f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a02f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02f4: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x2a02f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x2a02f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a02fc: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x2a02fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a0300: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0300u;
    {
        const bool branch_taken_0x2a0300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0300u;
        // 0x2a0304: 0xace20054  sw          $v0, 0x54($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0300) {
            ctx->pc = 0x2A0310u;
            goto label_2a0310;
        }
    }
    ctx->pc = 0x2A0308u;
    // 0x2a0308: 0x5ca0fff3  bgtzl       $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2A0308u;
    {
        const bool branch_taken_0x2a0308 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x2a0308) {
            ctx->pc = 0x2A030Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0308u;
            // 0x2a030c: 0x86001a  div         $zero, $a0, $a2 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A02D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a02d8;
        }
    }
    ctx->pc = 0x2A0310u;
label_2a0310:
    // 0x2a0310: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x2a0310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x2a0314: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2A0314u;
    {
        const bool branch_taken_0x2a0314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0314) {
            ctx->pc = 0x2A0318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0314u;
            // 0x2a0318: 0x8ce90054  lw          $t1, 0x54($a3) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A03C8u;
            goto label_2a03c8;
        }
    }
    ctx->pc = 0x2A031Cu;
    // 0x2a031c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2a031cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0320: 0x24ea0008  addiu       $t2, $a3, 0x8
    ctx->pc = 0x2a0320u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2a0324: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a0324u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0328: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a0328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a032c: 0x240cefff  addiu       $t4, $zero, -0x1001
    ctx->pc = 0x2a032cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a0330: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x2a0330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x2a0334: 0x0  nop
    ctx->pc = 0x2a0334u;
    // NOP
label_2a0338:
    // 0x2a0338: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a0338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a033c: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x2a033cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2a0340: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A0340u;
    {
        const bool branch_taken_0x2a0340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0340u;
        // 0x2a0344: 0x91880  sll         $v1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0340) {
            ctx->pc = 0x2A0368u;
            goto label_2a0368;
        }
    }
    ctx->pc = 0x2A0348u;
    // 0x2a0348: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2a0348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2a034c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a0350: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2a0350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2a0354: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x2a0354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0358: 0x6c1824  and         $v1, $v1, $t4
    ctx->pc = 0x2a0358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
    // 0x2a035c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2A035Cu;
    {
        const bool branch_taken_0x2a035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A035Cu;
        // 0x2a0360: 0xac830080  sw          $v1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a035c) {
            ctx->pc = 0x2A03B4u;
            goto label_2a03b4;
        }
    }
    ctx->pc = 0x2A0364u;
    // 0x2a0364: 0x0  nop
    ctx->pc = 0x2a0364u;
    // NOP
label_2a0368:
    // 0x2a0368: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2a0368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2a036c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2a036cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2a0370: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x2a0370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2a0374: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2a0374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2a0378: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x2a0378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2a037c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x2a037cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2a0380: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a0380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a0384: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2a0384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a0388: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2a0388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a038c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2a038cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a0390: 0xacc30078  sw          $v1, 0x78($a2)
    ctx->pc = 0x2a0390u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 3));
    // 0x2a0394: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2a0394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a0398: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2a0398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2a039c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a039cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a03a0: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x2a03a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x2a03a4: 0x8ce30054  lw          $v1, 0x54($a3)
    ctx->pc = 0x2a03a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x2a03a8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2a03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a03ac: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x2a03acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a03b0: 0x43480a  movz        $t1, $v0, $v1
    ctx->pc = 0x2a03b0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
label_2a03b4:
    // 0x2a03b4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2a03b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2a03b8: 0x503ffdf  bgezl       $t0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2A03B8u;
    {
        const bool branch_taken_0x2a03b8 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x2a03b8) {
            ctx->pc = 0x2A03BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A03B8u;
            // 0x2a03bc: 0x8ce20054  lw          $v0, 0x54($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0338;
        }
    }
    ctx->pc = 0x2A03C0u;
    // 0x2a03c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A03C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A03C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A03C8u;
label_2a03c8:
    // 0x2a03c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a03c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a03cc: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x2a03ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2a03d0:
    // 0x2a03d0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2a03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2a03d4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2a03d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a03d8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A03D8u;
    {
        const bool branch_taken_0x2a03d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a03d8) {
            ctx->pc = 0x2A03DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A03D8u;
            // 0x2a03dc: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0400u;
            goto label_2a0400;
        }
    }
    ctx->pc = 0x2A03E0u;
    // 0x2a03e0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2a03e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2a03e4: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x2a03e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a03e8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a03e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a03ec: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x2a03ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2a03f0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a03f4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a03f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a03f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2A03F8u;
    {
        const bool branch_taken_0x2a03f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03F8u;
        // 0x2a03fc: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a03f8) {
            ctx->pc = 0x2A0444u;
            goto label_2a0444;
        }
    }
    ctx->pc = 0x2A0400u;
label_2a0400:
    // 0x2a0400: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x2a0400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2a0404: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2a0404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2a0408: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x2a0408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2a040c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2a040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2a0410: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x2a0410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2a0414: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x2a0414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2a0418: 0x29240000  slti        $a0, $t1, 0x0
    ctx->pc = 0x2a0418u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2a041c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2a041cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a0420: 0x4480b  movn        $t1, $zero, $a0
    ctx->pc = 0x2a0420u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x2a0424: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a0424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a0428: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a0428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a042c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2a042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a0430: 0xacc20078  sw          $v0, 0x78($a2)
    ctx->pc = 0x2a0430u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 2));
    // 0x2a0434: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a0434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a0438: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a0438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a043c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a043cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a0440: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a0440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2a0444:
    // 0x2a0444: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a0444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a0448: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x2a0448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a044c: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2A044Cu;
    {
        const bool branch_taken_0x2a044c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a044c) {
            ctx->pc = 0x2A0450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A044Cu;
            // 0x2a0450: 0x8ce20054  lw          $v0, 0x54($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A03D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a03d0;
        }
    }
    ctx->pc = 0x2A0454u;
    // 0x2a0454: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A045Cu;
    // 0x2a045c: 0x0  nop
    ctx->pc = 0x2a045cu;
    // NOP
    ctx->pc = 0x2a0460u;
}
