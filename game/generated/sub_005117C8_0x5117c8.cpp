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

// Function: sub_005117C8
// Address: 0x5117c8 - 0x5118c0
void sub_005117C8_0x5117c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005117C8_0x5117c8");
#endif

    switch (ctx->pc) {
        case 0x511830u: goto label_511830;
        case 0x511868u: goto label_511868;
        default: break;
    }

    ctx->pc = 0x5117c8u;

    // 0x5117c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5117c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5117cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5117ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5117d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5117d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5117d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5117d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5117d8: 0x26320046  addiu       $s2, $s1, 0x46
    ctx->pc = 0x5117d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 70));
    // 0x5117dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x5117dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x5117e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x5117e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5117e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5117e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5117e8: 0x2627004a  addiu       $a3, $s1, 0x4A
    ctx->pc = 0x5117e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 74));
    // 0x5117ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x5117ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x5117f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x5117f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x5117f4: 0x92500001  lbu         $s0, 0x1($s2)
    ctx->pc = 0x5117f4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x5117f8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x5117f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5117fc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x5117fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x511800: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x511800u;
    {
        const bool branch_taken_0x511800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x511804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511800u;
        // 0x511804: 0x86930000  lh          $s3, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511800) {
            ctx->pc = 0x511868u;
            goto label_511868;
        }
    }
    ctx->pc = 0x511808u;
    // 0x511808: 0x102440  sll         $a0, $s0, 17
    ctx->pc = 0x511808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 17));
    // 0x51180c: 0x131c40  sll         $v1, $s3, 17
    ctx->pc = 0x51180cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 17));
    // 0x511810: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x511810u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x511814: 0x32c03  sra         $a1, $v1, 16
    ctx->pc = 0x511814u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
    // 0x511818: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x511818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x51181c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x51181cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x511820: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x511820u;
    {
        const bool branch_taken_0x511820 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x511824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511820u;
        // 0x511824: 0x48403  sra         $s0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511820) {
            ctx->pc = 0x511858u;
            goto label_511858;
        }
    }
    ctx->pc = 0x511828u;
    // 0x511828: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x511828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x51182c: 0x0  nop
    ctx->pc = 0x51182cu;
    // NOP
label_511830:
    // 0x511830: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x511830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511834: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x511834u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x511838: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x511838u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x51183c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x51183cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x511840: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x511840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x511844: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x511844u;
    {
        const bool branch_taken_0x511844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x511848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511844u;
        // 0x511848: 0x661821  addu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511844) {
            ctx->pc = 0x511880u;
            goto label_511880;
        }
    }
    ctx->pc = 0x51184Cu;
    // 0x51184c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x51184cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x511850: 0x440fff7  bltz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x511850u;
    {
        const bool branch_taken_0x511850 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x511854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511850u;
        // 0x511854: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511850) {
            ctx->pc = 0x511830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_511830;
        }
    }
    ctx->pc = 0x511858u;
label_511858:
    // 0x511858: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x511858u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x51185c: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x51185cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
    // 0x511860: 0xc144b8e  jal         func_512E38
    ctx->pc = 0x511860u;
    SET_GPR_U32(ctx, 31, 0x511868u);
    ctx->pc = 0x511864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511860u;
    // 0x511864: 0xa4f00000  sh          $s0, 0x0($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512E38u, 0x511860u, 0x511868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511868u;
label_511868:
    // 0x511868: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x511868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x51186c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x51186Cu;
    {
        const bool branch_taken_0x51186c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x511870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51186Cu;
        // 0x511870: 0x2623000c  addiu       $v1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51186c) {
            ctx->pc = 0x511884u;
            goto label_511884;
        }
    }
    ctx->pc = 0x511874u;
    // 0x511874: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x511874u;
    {
        const bool branch_taken_0x511874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511874u;
        // 0x511878: 0xa6900000  sh          $s0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511874) {
            ctx->pc = 0x511890u;
            goto label_511890;
        }
    }
    ctx->pc = 0x51187Cu;
    // 0x51187c: 0x0  nop
    ctx->pc = 0x51187cu;
    // NOP
label_511880:
    // 0x511880: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x511880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_511884:
    // 0x511884: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x511884u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x511888: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x511888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x51188c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x51188cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_511890:
    // 0x511890: 0x96230048  lhu         $v1, 0x48($s1)
    ctx->pc = 0x511890u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x511894: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x511894u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x511898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x511898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51189c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5118a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5118a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5118a4: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x5118a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5118a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5118a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5118ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5118acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5118b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5118b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5118b4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x5118b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5118b8: 0x3e00008  jr          $ra
    ctx->pc = 0x5118B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5118BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5118B8u;
        // 0x5118bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5118B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5118C0u;
}
