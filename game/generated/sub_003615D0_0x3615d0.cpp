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

// Function: sub_003615D0
// Address: 0x3615d0 - 0x3616d0
void sub_003615D0_0x3615d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003615D0_0x3615d0");
#endif

    switch (ctx->pc) {
        case 0x361604u: goto label_361604;
        case 0x361618u: goto label_361618;
        case 0x361658u: goto label_361658;
        case 0x361678u: goto label_361678;
        case 0x361680u: goto label_361680;
        case 0x36169cu: goto label_36169c;
        case 0x3616b0u: goto label_3616b0;
        default: break;
    }

    ctx->pc = 0x3615d0u;

label_3615d0:
    // 0x3615d0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x3615d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x3615d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3615d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3615d8: 0x42e3a  dsrl        $a1, $a0, 24
    ctx->pc = 0x3615d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) >> 24);
    // 0x3615dc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x3615dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3615e0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3615e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3615e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3615e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3615e8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3615e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3615ec: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3615ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3615f0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3615f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3615f4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3615f4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3615f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3615f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3615fc: 0xc0d711c  jal         func_35C470
    ctx->pc = 0x3615FCu;
    SET_GPR_U32(ctx, 31, 0x361604u);
    ctx->pc = 0x35C470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C470u, 0x3615FCu, 0x361604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361604u;
label_361604:
    // 0x361604: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x361608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36160c: 0x3e00008  jr          $ra
    ctx->pc = 0x36160Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36160Cu;
        // 0x361610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36160Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361614u;
    // 0x361614: 0x0  nop
    ctx->pc = 0x361614u;
    // NOP
label_361618:
    // 0x361618: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x361618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x36161c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x36161cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x361620: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x361620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x361624: 0x48e03  sra         $s1, $a0, 24
    ctx->pc = 0x361624u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 24));
    // 0x361628: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x361628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x36162c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x36162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x361630: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x361630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x361634: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x361634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x361638: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x361638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x36163c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36163cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361640: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x361640u;
    {
        const bool branch_taken_0x361640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361640u;
        // 0x361644: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361640) {
            ctx->pc = 0x361668u;
            goto label_361668;
        }
    }
    ctx->pc = 0x361648u;
    // 0x361648: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x361648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x36164c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36164cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361650: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361650u;
    SET_GPR_U32(ctx, 31, 0x361658u);
    ctx->pc = 0x361654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361650u;
    // 0x361654: 0x24846e70  addiu       $a0, $a0, 0x6E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361650u, 0x361658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361658u;
label_361658:
    // 0x361658: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x36165c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x36165Cu;
    {
        const bool branch_taken_0x36165c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36165Cu;
        // 0x361660: 0x34420019  ori         $v0, $v0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36165c) {
            ctx->pc = 0x3616B4u;
            goto label_3616b4;
        }
    }
    ctx->pc = 0x361664u;
    // 0x361664: 0x0  nop
    ctx->pc = 0x361664u;
    // NOP
label_361668:
    // 0x361668: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x361668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36166c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x36166cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361674: 0x0  nop
    ctx->pc = 0x361674u;
    // NOP
label_361678:
    // 0x361678: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x361678u;
    SET_GPR_U32(ctx, 31, 0x361680u);
    ctx->pc = 0x36167Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361678u;
    // 0x36167c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x361678u, 0x361680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361680u;
label_361680:
    // 0x361680: 0x2131804  sllv        $v1, $s3, $s0
    ctx->pc = 0x361680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 16) & 0x1F));
    // 0x361684: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x361684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x361688: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x361688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x36168c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36168Cu;
    {
        const bool branch_taken_0x36168c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x361690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36168Cu;
        // 0x361690: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36168c) {
            ctx->pc = 0x36169Cu;
            goto label_36169c;
        }
    }
    ctx->pc = 0x361694u;
    // 0x361694: 0xc0d92c8  jal         func_364B20
    ctx->pc = 0x361694u;
    SET_GPR_U32(ctx, 31, 0x36169Cu);
    ctx->pc = 0x361698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361694u;
    // 0x361698: 0x729025  or          $s2, $v1, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364B20u, 0x361694u, 0x36169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36169Cu;
label_36169c:
    // 0x36169c: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x36169cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x3616a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3616A0u;
    {
        const bool branch_taken_0x3616a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3616A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3616A0u;
        // 0x3616a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3616a0) {
            ctx->pc = 0x361678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361678;
        }
    }
    ctx->pc = 0x3616A8u;
    // 0x3616a8: 0xc0d8574  jal         func_3615D0
    ctx->pc = 0x3616A8u;
    SET_GPR_U32(ctx, 31, 0x3616B0u);
    ctx->pc = 0x3616ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3616A8u;
    // 0x3616ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3615D0u;
    goto label_3615d0;
    ctx->pc = 0x3616B0u;
label_3616b0:
    // 0x3616b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3616b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3616b4:
    // 0x3616b4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x3616b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3616b8: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x3616b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3616bc: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x3616bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3616c0: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x3616c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3616c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3616c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3616c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3616C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3616CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3616C8u;
        // 0x3616cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3616C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3616D0u;
}
