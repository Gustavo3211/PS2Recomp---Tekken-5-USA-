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

// Function: sub_004DB5D0
// Address: 0x4db5d0 - 0x4db730
void sub_004DB5D0_0x4db5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB5D0_0x4db5d0");
#endif

    switch (ctx->pc) {
        case 0x4db63cu: goto label_4db63c;
        case 0x4db650u: goto label_4db650;
        case 0x4db67cu: goto label_4db67c;
        case 0x4db6b8u: goto label_4db6b8;
        case 0x4db6f4u: goto label_4db6f4;
        case 0x4db6fcu: goto label_4db6fc;
        case 0x4db704u: goto label_4db704;
        case 0x4db718u: goto label_4db718;
        default: break;
    }

    ctx->pc = 0x4db5d0u;

    // 0x4db5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4db5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4db5d4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4db5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4db5d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4db5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4db5dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4db5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db5e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4db5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4db5e4: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4db5e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4db5e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4db5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4db5ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4db5ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4db5f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4db5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4db5f4: 0x25291108  addiu       $t1, $t1, 0x1108
    ctx->pc = 0x4db5f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4360));
    // 0x4db5f8: 0x254a110c  addiu       $t2, $t2, 0x110C
    ctx->pc = 0x4db5f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4364));
    // 0x4db5fc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4db5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4db600: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4db600u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F1108u));
    // 0x4db604: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4db604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4db608: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4db608u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F110Cu));
    // 0x4db60c: 0x34420450  ori         $v0, $v0, 0x450
    ctx->pc = 0x4db60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1104);
    // 0x4db610: 0x86030164  lh          $v1, 0x164($s0)
    ctx->pc = 0x4db610u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4db614: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4db614u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4db618: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4db618u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4db61c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x4db61cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db620: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4db620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4db624: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4db624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db628: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4db628u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4db62c: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4db62cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4db630: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4db630u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x4db634: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4DB634u;
    SET_GPR_U32(ctx, 31, 0x4DB63Cu);
    ctx->pc = 0x4DB638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB634u;
    // 0x4db638: 0xad470000  sw          $a3, 0x0($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4DB634u, 0x4DB63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB63Cu;
label_4db63c:
    // 0x4db63c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4db63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4db640: 0x24511118  addiu       $s1, $v0, 0x1118
    ctx->pc = 0x4db640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4376));
    // 0x4db644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4db644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db648: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4DB648u;
    SET_GPR_U32(ctx, 31, 0x4DB650u);
    ctx->pc = 0x4DB64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB648u;
    // 0x4db64c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4DB648u, 0x4DB650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB650u;
label_4db650:
    // 0x4db650: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4DB650u;
    {
        const bool branch_taken_0x4db650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x4DB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB650u;
        // 0x4db654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db650) {
            ctx->pc = 0x4DB670u;
            goto label_4db670;
        }
    }
    ctx->pc = 0x4DB658u;
    // 0x4db658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4db658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db65c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4db65cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4db660: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4db660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db664: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4db664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4db668: 0x8136db0  j           func_4DB6C0
    ctx->pc = 0x4DB668u;
    ctx->pc = 0x4DB66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB668u;
    // 0x4db66c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB6C0u;
    goto label_4db6c0;
    ctx->pc = 0x4DB670u;
label_4db670:
    // 0x4db670: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4db670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4db674: 0xc128228  jal         func_4A08A0
    ctx->pc = 0x4DB674u;
    SET_GPR_U32(ctx, 31, 0x4DB67Cu);
    ctx->pc = 0x4DB678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB674u;
    // 0x4db678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A08A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A08A0u, 0x4DB674u, 0x4DB67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB67Cu;
label_4db67c:
    // 0x4db67c: 0x14520008  bne         $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x4DB67Cu;
    {
        const bool branch_taken_0x4db67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x4DB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB67Cu;
        // 0x4db680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db67c) {
            ctx->pc = 0x4DB6A0u;
            goto label_4db6a0;
        }
    }
    ctx->pc = 0x4DB684u;
    // 0x4db684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4db684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db688: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4db688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4db68c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4db68cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db690: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4db690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4db694: 0x8136db0  j           func_4DB6C0
    ctx->pc = 0x4DB694u;
    ctx->pc = 0x4DB698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB694u;
    // 0x4db698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB6C0u;
    goto label_4db6c0;
    ctx->pc = 0x4DB69Cu;
    // 0x4db69c: 0x0  nop
    ctx->pc = 0x4db69cu;
    // NOP
label_4db6a0:
    // 0x4db6a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4db6a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db6a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4db6a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4db6a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4db6a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db6ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4db6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4db6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB6B0u;
        // 0x4db6b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB6B8u;
label_4db6b8:
    // 0x4db6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB6C0u;
label_4db6c0:
    // 0x4db6c0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4db6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4db6c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4db6c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4db6c8: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4db6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4db6cc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x4db6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4db6d0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x4db6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4db6d4: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x4db6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x4db6d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4db6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4db6dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4db6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db6e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4db6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4db6e4: 0xa46223c4  sh          $v0, 0x23C4($v1)
    ctx->pc = 0x4db6e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x4db6e8: 0xa465232e  sh          $a1, 0x232E($v1)
    ctx->pc = 0x4db6e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9AEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9AEu, _value); } while (0);
    // 0x4db6ec: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4DB6ECu;
    SET_GPR_U32(ctx, 31, 0x4DB6F4u);
    ctx->pc = 0x4DB6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB6ECu;
    // 0x4db6f0: 0xa466232c  sh          $a2, 0x232C($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 9004), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4DB6ECu, 0x4DB6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB6F4u;
label_4db6f4:
    // 0x4db6f4: 0xc122f12  jal         func_48BC48
    ctx->pc = 0x4DB6F4u;
    SET_GPR_U32(ctx, 31, 0x4DB6FCu);
    ctx->pc = 0x4DB6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB6F4u;
    // 0x4db6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC48u, 0x4DB6F4u, 0x4DB6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB6FCu;
label_4db6fc:
    // 0x4db6fc: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4DB6FCu;
    SET_GPR_U32(ctx, 31, 0x4DB704u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4DB6FCu, 0x4DB704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB704u;
label_4db704:
    // 0x4db704: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4db704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4db708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4db708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db70c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4db70cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db710: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4DB710u;
    ctx->pc = 0x4DB714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB710u;
    // 0x4db714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4DB718u;
label_4db718:
    // 0x4db718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4db718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4db71c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4db71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4db720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4db720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db724: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4DB724u;
    ctx->pc = 0x4DB728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB724u;
    // 0x4db728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4DB72Cu;
    // 0x4db72c: 0x0  nop
    ctx->pc = 0x4db72cu;
    // NOP
    ctx->pc = 0x4db730u;
}
