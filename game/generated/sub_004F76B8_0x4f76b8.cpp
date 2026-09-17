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

// Function: sub_004F76B8
// Address: 0x4f76b8 - 0x4f77e0
void sub_004F76B8_0x4f76b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F76B8_0x4f76b8");
#endif

    switch (ctx->pc) {
        case 0x4f76e4u: goto label_4f76e4;
        default: break;
    }

    ctx->pc = 0x4f76b8u;

    // 0x4f76b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f76b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f76bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f76bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f76c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f76c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f76c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f76c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f76c8: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4f76c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4f76cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f76ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f76d0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f76d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f76d4: 0x442002d  bltzl       $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x4F76D4u;
    {
        const bool branch_taken_0x4f76d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f76d4) {
            ctx->pc = 0x4F76D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F76D4u;
            // 0x4f76d8: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F778Cu;
            goto label_4f778c;
        }
    }
    ctx->pc = 0x4F76DCu;
    // 0x4f76dc: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4F76DCu;
    SET_GPR_U32(ctx, 31, 0x4F76E4u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4F76DCu, 0x4F76E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F76E4u;
label_4f76e4:
    // 0x4f76e4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f76e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4f76e8: 0x960201be  lhu         $v0, 0x1BE($s0)
    ctx->pc = 0x4f76e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4f76ec: 0x26070124  addiu       $a3, $s0, 0x124
    ctx->pc = 0x4f76ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x4f76f0: 0x86030160  lh          $v1, 0x160($s0)
    ctx->pc = 0x4f76f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4f76f4: 0x26050128  addiu       $a1, $s0, 0x128
    ctx->pc = 0x4f76f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x4f76f8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4f76f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f76fc: 0x2608012c  addiu       $t0, $s0, 0x12C
    ctx->pc = 0x4f76fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x4f7700: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f7700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f7704: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4f7704u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f7708: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4f7708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f770c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f770cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f7710: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4f7710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4f7714: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4f7714u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4f7718: 0x96040162  lhu         $a0, 0x162($s0)
    ctx->pc = 0x4f7718u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4f771c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f771cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f7720: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f7720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f7724: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f7724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f7728: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f7728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f772c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4f772cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4f7730: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f7730u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f7734: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f7734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f7738: 0x86020164  lh          $v0, 0x164($s0)
    ctx->pc = 0x4f7738u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4f773c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f773cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f7740: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f7740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7744: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f7744u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f7748: 0x96020166  lhu         $v0, 0x166($s0)
    ctx->pc = 0x4f7748u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4f774c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f774cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f7750: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f7750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f7754: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f7754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f7758: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f7758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f775c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f775cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7760: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4f7760u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4f7764: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f7764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f7768: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x4f7768u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4f776c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f776cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f7770: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f7770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f7774: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4f7774u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4f7778: 0xa609002e  sh          $t1, 0x2E($s0)
    ctx->pc = 0x4f7778u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 9));
    // 0x4f777c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f777cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f7780: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f7780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f7784: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4f7784u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f7788: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4f7788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4f778c:
    // 0x4f778c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4F778Cu;
    {
        const bool branch_taken_0x4f778c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F778Cu;
        // 0x4f7790: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f778c) {
            ctx->pc = 0x4F77B0u;
            goto label_4f77b0;
        }
    }
    ctx->pc = 0x4F7794u;
    // 0x4f7794: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4F7794u;
    {
        const bool branch_taken_0x4f7794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F7794u;
        // 0x4f7798: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7794) {
            ctx->pc = 0x4F77C8u;
            goto label_4f77c8;
        }
    }
    ctx->pc = 0x4F779Cu;
    // 0x4f779c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f779cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f77a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f77a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f77a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4F77A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F77A4u;
        // 0x4f77a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F77A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F77ACu;
    // 0x4f77ac: 0x0  nop
    ctx->pc = 0x4f77acu;
    // NOP
label_4f77b0:
    // 0x4f77b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f77b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f77b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f77b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f77b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f77b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f77bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f77bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f77c0: 0x813dcf0  j           func_4F73C0
    ctx->pc = 0x4F77C0u;
    ctx->pc = 0x4F77C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F77C0u;
    // 0x4f77c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F73C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F73C0u, 0x4F77C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F77C8u;
label_4f77c8:
    // 0x4f77c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f77c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f77cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f77ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f77d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f77d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f77d4: 0x813dcca  j           func_4F7328
    ctx->pc = 0x4F77D4u;
    ctx->pc = 0x4F77D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F77D4u;
    // 0x4f77d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F7328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F7328u, 0x4F77D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F77DCu;
    // 0x4f77dc: 0x0  nop
    ctx->pc = 0x4f77dcu;
    // NOP
    ctx->pc = 0x4f77e0u;
}
