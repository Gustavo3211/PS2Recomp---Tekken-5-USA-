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

// Function: sub_001F4488
// Address: 0x1f4488 - 0x1f45b0
void sub_001F4488_0x1f4488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4488_0x1f4488");
#endif

    switch (ctx->pc) {
        case 0x1f44a0u: goto label_1f44a0;
        default: break;
    }

    ctx->pc = 0x1f4488u;

    // 0x1f4488: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1f4488u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f448c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f448cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4490: 0x258a0520  addiu       $t2, $t4, 0x520
    ctx->pc = 0x1f4490u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 1312));
    // 0x1f4494: 0x25890570  addiu       $t1, $t4, 0x570
    ctx->pc = 0x1f4494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 1392));
    // 0x1f4498: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x1f4498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f449c: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x1f449cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1f44a0:
    // 0x1f44a0: 0x91220044  lbu         $v0, 0x44($t1)
    ctx->pc = 0x1f44a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x1f44a4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1F44A4u;
    {
        const bool branch_taken_0x1f44a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F44A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F44A4u;
        // 0x1f44a8: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f44a4) {
            ctx->pc = 0x1F4580u;
            goto label_1f4580;
        }
    }
    ctx->pc = 0x1F44ACu;
    // 0x1f44ac: 0x9144004b  lbu         $a0, 0x4B($t2)
    ctx->pc = 0x1f44acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 75)));
    // 0x1f44b0: 0x9125004b  lbu         $a1, 0x4B($t1)
    ctx->pc = 0x1f44b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 75)));
    // 0x1f44b4: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x1f44b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f44b8: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x1f44b8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1f44bc: 0x91240045  lbu         $a0, 0x45($t1)
    ctx->pc = 0x1f44bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 69)));
    // 0x1f44c0: 0x65400b  movn        $t0, $v1, $a1
    ctx->pc = 0x1f44c0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x1f44c4: 0x91450046  lbu         $a1, 0x46($t2)
    ctx->pc = 0x1f44c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 70)));
    // 0x1f44c8: 0x91460045  lbu         $a2, 0x45($t2)
    ctx->pc = 0x1f44c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 69)));
    // 0x1f44cc: 0x24e20002  addiu       $v0, $a3, 0x2
    ctx->pc = 0x1f44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x1f44d0: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x1f44d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1f44d4: 0x46380b  movn        $a3, $v0, $a2
    ctx->pc = 0x1f44d4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1f44d8: 0x91460049  lbu         $a2, 0x49($t2)
    ctx->pc = 0x1f44d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 73)));
    // 0x1f44dc: 0x64400b  movn        $t0, $v1, $a0
    ctx->pc = 0x1f44dcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x1f44e0: 0x91240046  lbu         $a0, 0x46($t1)
    ctx->pc = 0x1f44e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 70)));
    // 0x1f44e4: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x1f44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x1f44e8: 0x25030003  addiu       $v1, $t0, 0x3
    ctx->pc = 0x1f44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x1f44ec: 0x45380b  movn        $a3, $v0, $a1
    ctx->pc = 0x1f44ecu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1f44f0: 0x91250049  lbu         $a1, 0x49($t1)
    ctx->pc = 0x1f44f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 73)));
    // 0x1f44f4: 0x64400b  movn        $t0, $v1, $a0
    ctx->pc = 0x1f44f4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x1f44f8: 0x91440047  lbu         $a0, 0x47($t2)
    ctx->pc = 0x1f44f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 71)));
    // 0x1f44fc: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x1f44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1f4500: 0x25030004  addiu       $v1, $t0, 0x4
    ctx->pc = 0x1f4500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1f4504: 0x46380b  movn        $a3, $v0, $a2
    ctx->pc = 0x1f4504u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1f4508: 0x91460048  lbu         $a2, 0x48($t2)
    ctx->pc = 0x1f4508u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 72)));
    // 0x1f450c: 0x65400b  movn        $t0, $v1, $a1
    ctx->pc = 0x1f450cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x1f4510: 0x91250047  lbu         $a1, 0x47($t1)
    ctx->pc = 0x1f4510u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 71)));
    // 0x1f4514: 0x24e20005  addiu       $v0, $a3, 0x5
    ctx->pc = 0x1f4514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
    // 0x1f4518: 0x25030005  addiu       $v1, $t0, 0x5
    ctx->pc = 0x1f4518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1f451c: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x1f451cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1f4520: 0x91240048  lbu         $a0, 0x48($t1)
    ctx->pc = 0x1f4520u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x1f4524: 0x65400b  movn        $t0, $v1, $a1
    ctx->pc = 0x1f4524u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x1f4528: 0x9145004a  lbu         $a1, 0x4A($t2)
    ctx->pc = 0x1f4528u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 74)));
    // 0x1f452c: 0x24e20006  addiu       $v0, $a3, 0x6
    ctx->pc = 0x1f452cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x1f4530: 0x25030006  addiu       $v1, $t0, 0x6
    ctx->pc = 0x1f4530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x1f4534: 0x64400b  movn        $t0, $v1, $a0
    ctx->pc = 0x1f4534u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x1f4538: 0x9124004a  lbu         $a0, 0x4A($t1)
    ctx->pc = 0x1f4538u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 74)));
    // 0x1f453c: 0x46380b  movn        $a3, $v0, $a2
    ctx->pc = 0x1f453cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1f4540: 0x25030007  addiu       $v1, $t0, 0x7
    ctx->pc = 0x1f4540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x1f4544: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x1f4544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x1f4548: 0x64400b  movn        $t0, $v1, $a0
    ctx->pc = 0x1f4548u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x1f454c: 0x45380b  movn        $a3, $v0, $a1
    ctx->pc = 0x1f454cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1f4550: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1f4550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1f4554: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4554u;
    {
        const bool branch_taken_0x1f4554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4554) {
            ctx->pc = 0x1F4568u;
            goto label_1f4568;
        }
    }
    ctx->pc = 0x1F455Cu;
    // 0x1f455c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F455Cu;
    {
        const bool branch_taken_0x1f455c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F455Cu;
        // 0x1f4560: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f455c) {
            ctx->pc = 0x1F4580u;
            goto label_1f4580;
        }
    }
    ctx->pc = 0x1F4564u;
    // 0x1f4564: 0x0  nop
    ctx->pc = 0x1f4564u;
    // NOP
label_1f4568:
    // 0x1f4568: 0x55070006  bnel        $t0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4568u;
    {
        const bool branch_taken_0x1f4568 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1f4568) {
            ctx->pc = 0x1F456Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4568u;
            // 0x1f456c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4584u;
            goto label_1f4584;
        }
    }
    ctx->pc = 0x1F4570u;
    // 0x1f4570: 0x85420042  lh          $v0, 0x42($t2)
    ctx->pc = 0x1f4570u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 66)));
    // 0x1f4574: 0x85230042  lh          $v1, 0x42($t1)
    ctx->pc = 0x1f4574u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 66)));
    // 0x1f4578: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f4578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f457c: 0x122500b  movn        $t2, $t1, $v0
    ctx->pc = 0x1f457cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 9));
label_1f4580:
    // 0x1f4580: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1f4580u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1f4584:
    // 0x1f4584: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f4584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4588: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x1f4588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1f458c: 0x29630002  slti        $v1, $t3, 0x2
    ctx->pc = 0x1f458cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f4590: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1f4590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1f4594: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f4594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4598: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f4598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f459c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x1f459cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1f45a0: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1F45A0u;
    {
        const bool branch_taken_0x1f45a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45A0u;
        // 0x1f45a4: 0x24490520  addiu       $t1, $v0, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f45a0) {
            ctx->pc = 0x1F44A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f44a0;
        }
    }
    ctx->pc = 0x1F45A8u;
    // 0x1f45a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F45A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F45ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45A8u;
        // 0x1f45ac: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F45A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F45B0u;
}
