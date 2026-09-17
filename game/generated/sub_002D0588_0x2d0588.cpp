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

// Function: sub_002D0588
// Address: 0x2d0588 - 0x2d0680
void sub_002D0588_0x2d0588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0588_0x2d0588");
#endif

    switch (ctx->pc) {
        case 0x2d05dcu: goto label_2d05dc;
        case 0x2d05f0u: goto label_2d05f0;
        case 0x2d0638u: goto label_2d0638;
        case 0x2d0668u: goto label_2d0668;
        default: break;
    }

    ctx->pc = 0x2d0588u;

    // 0x2d0588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d058c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d058cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d0590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0598: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2d0598u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d059c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2d059cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2d05a0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2D05A0u;
    {
        const bool branch_taken_0x2d05a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05A0u;
        // 0x2d05a4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05a0) {
            ctx->pc = 0x2D0668u;
            goto label_2d0668;
        }
    }
    ctx->pc = 0x2D05A8u;
    // 0x2d05a8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2d05a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d05ac: 0x24627eb3  addiu       $v0, $v1, 0x7EB3
    ctx->pc = 0x2d05acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32435));
    // 0x2d05b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d05b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d05b4: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2d05b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2d05b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D05B8u;
    {
        const bool branch_taken_0x2d05b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05B8u;
        // 0x2d05bc: 0x94900002  lhu         $s0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05b8) {
            ctx->pc = 0x2D05F8u;
            goto label_2d05f8;
        }
    }
    ctx->pc = 0x2D05C0u;
    // 0x2d05c0: 0x34028150  ori         $v0, $zero, 0x8150
    ctx->pc = 0x2d05c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33104);
    // 0x2d05c4: 0x54620029  bnel        $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D05C4u;
    {
        const bool branch_taken_0x2d05c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d05c4) {
            ctx->pc = 0x2D05C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D05C4u;
            // 0x2d05c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D066Cu;
            goto label_2d066c;
        }
    }
    ctx->pc = 0x2D05CCu;
    // 0x2d05cc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D05CCu;
    {
        const bool branch_taken_0x2d05cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d05cc) {
            ctx->pc = 0x2D05E8u;
            goto label_2d05e8;
        }
    }
    ctx->pc = 0x2D05D4u;
    // 0x2d05d4: 0xc091c4a  jal         func_247128
    ctx->pc = 0x2D05D4u;
    SET_GPR_U32(ctx, 31, 0x2D05DCu);
    ctx->pc = 0x2D05D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D05D4u;
    // 0x2d05d8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247128u, 0x2D05D4u, 0x2D05DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D05DCu;
label_2d05dc:
    // 0x2d05dc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2D05DCu;
    {
        const bool branch_taken_0x2d05dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05DCu;
        // 0x2d05e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05dc) {
            ctx->pc = 0x2D066Cu;
            goto label_2d066c;
        }
    }
    ctx->pc = 0x2D05E4u;
    // 0x2d05e4: 0x0  nop
    ctx->pc = 0x2d05e4u;
    // NOP
label_2d05e8:
    // 0x2d05e8: 0xc091c4a  jal         func_247128
    ctx->pc = 0x2D05E8u;
    SET_GPR_U32(ctx, 31, 0x2D05F0u);
    ctx->pc = 0x2D05ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D05E8u;
    // 0x2d05ec: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247128u, 0x2D05E8u, 0x2D05F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D05F0u;
label_2d05f0:
    // 0x2d05f0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2D05F0u;
    {
        const bool branch_taken_0x2d05f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D05F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05F0u;
        // 0x2d05f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05f0) {
            ctx->pc = 0x2D066Cu;
            goto label_2d066c;
        }
    }
    ctx->pc = 0x2D05F8u;
label_2d05f8:
    // 0x2d05f8: 0x340280c3  ori         $v0, $zero, 0x80C3
    ctx->pc = 0x2d05f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32963);
    // 0x2d05fc: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D05FCu;
    {
        const bool branch_taken_0x2d05fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05FCu;
        // 0x2d0600: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05fc) {
            ctx->pc = 0x2D0658u;
            goto label_2d0658;
        }
    }
    ctx->pc = 0x2D0604u;
    // 0x2d0604: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0604u;
    {
        const bool branch_taken_0x2d0604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0604u;
        // 0x2d0608: 0x340280c4  ori         $v0, $zero, 0x80C4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32964);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0604) {
            ctx->pc = 0x2D0620u;
            goto label_2d0620;
        }
    }
    ctx->pc = 0x2D060Cu;
    // 0x2d060c: 0x3402808d  ori         $v0, $zero, 0x808D
    ctx->pc = 0x2d060cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32909);
    // 0x2d0610: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0610u;
    {
        const bool branch_taken_0x2d0610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0610) {
            ctx->pc = 0x2D0630u;
            goto label_2d0630;
        }
    }
    ctx->pc = 0x2D0618u;
    // 0x2d0618: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2D0618u;
    {
        const bool branch_taken_0x2d0618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0618u;
        // 0x2d061c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0618) {
            ctx->pc = 0x2D066Cu;
            goto label_2d066c;
        }
    }
    ctx->pc = 0x2D0620u;
label_2d0620:
    // 0x2d0620: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D0620u;
    {
        const bool branch_taken_0x2d0620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0620u;
        // 0x2d0624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0620) {
            ctx->pc = 0x2D0660u;
            goto label_2d0660;
        }
    }
    ctx->pc = 0x2D0628u;
    // 0x2d0628: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D0628u;
    {
        const bool branch_taken_0x2d0628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0628u;
        // 0x2d062c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0628) {
            ctx->pc = 0x2D066Cu;
            goto label_2d066c;
        }
    }
    ctx->pc = 0x2D0630u;
label_2d0630:
    // 0x2d0630: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2D0630u;
    SET_GPR_U32(ctx, 31, 0x2D0638u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2D0630u, 0x2D0638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0638u;
label_2d0638:
    // 0x2d0638: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2d0638u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d063c: 0x1810  mfhi        $v1
    ctx->pc = 0x2d063cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2d0640: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2d0640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2d0644: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0644u;
    {
        const bool branch_taken_0x2d0644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0644u;
        // 0x2d0648: 0xa6230302  sh          $v1, 0x302($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 770), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0644) {
            ctx->pc = 0x2D0668u;
            goto label_2d0668;
        }
    }
    ctx->pc = 0x2D064Cu;
    // 0x2d064c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0650: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0650u;
    {
        const bool branch_taken_0x2d0650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0650u;
        // 0x2d0654: 0xa6220302  sh          $v0, 0x302($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 770), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0650) {
            ctx->pc = 0x2D0668u;
            goto label_2d0668;
        }
    }
    ctx->pc = 0x2D0658u;
label_2d0658:
    // 0x2d0658: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0658u;
    {
        const bool branch_taken_0x2d0658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0658u;
        // 0x2d065c: 0xa23001ab  sb          $s0, 0x1AB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 427), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0658) {
            ctx->pc = 0x2D0668u;
            goto label_2d0668;
        }
    }
    ctx->pc = 0x2D0660u;
label_2d0660:
    // 0x2d0660: 0xc09d8bc  jal         func_2762F0
    ctx->pc = 0x2D0660u;
    SET_GPR_U32(ctx, 31, 0x2D0668u);
    ctx->pc = 0x2D0664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0660u;
    // 0x2d0664: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2762F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2762F0u, 0x2D0660u, 0x2D0668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0668u;
label_2d0668:
    // 0x2d0668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d066c:
    // 0x2d066c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d066cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0674: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0674u;
        // 0x2d0678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D067Cu;
    // 0x2d067c: 0x0  nop
    ctx->pc = 0x2d067cu;
    // NOP
    ctx->pc = 0x2d0680u;
}
