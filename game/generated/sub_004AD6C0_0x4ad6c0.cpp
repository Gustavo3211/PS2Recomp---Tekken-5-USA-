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

// Function: sub_004AD6C0
// Address: 0x4ad6c0 - 0x4ad770
void sub_004AD6C0_0x4ad6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD6C0_0x4ad6c0");
#endif

    switch (ctx->pc) {
        case 0x4ad6f0u: goto label_4ad6f0;
        case 0x4ad708u: goto label_4ad708;
        default: break;
    }

    ctx->pc = 0x4ad6c0u;

    // 0x4ad6c0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ad6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4ad6c4: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4ad6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4ad6c8: 0x246323f8  addiu       $v1, $v1, 0x23F8
    ctx->pc = 0x4ad6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9208));
    // 0x4ad6cc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x4ad6ccu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x72FA78u));
    // 0x4ad6d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4ad6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4ad6d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4ad6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ad6d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ad6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ad6dc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4ad6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4ad6e0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4ad6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4ad6e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ad6e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ad6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD6E8u;
        // 0x4ad6ec: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD6F0u;
label_4ad6f0:
    // 0x4ad6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ad6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ad6f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ad6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ad6f8: 0x48400  sll         $s0, $a0, 16
    ctx->pc = 0x4ad6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4ad6fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4ad6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4ad700: 0xc1232fa  jal         func_48CBE8
    ctx->pc = 0x4AD700u;
    SET_GPR_U32(ctx, 31, 0x4AD708u);
    ctx->pc = 0x4AD704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD700u;
    // 0x4ad704: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBE8u, 0x4AD700u, 0x4AD708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD708u;
label_4ad708:
    // 0x4ad708: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4ad708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4ad70c: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x4ad70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x4ad710: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4ad710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad714: 0x24842302  addiu       $a0, $a0, 0x2302
    ctx->pc = 0x4ad714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8962));
    // 0x4ad718: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x4ad718u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x4ad71c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4ad71cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ad720: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4ad720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ad724: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4ad724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ad728: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4ad728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4ad72c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x4ad72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ad730: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4ad730u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ad734: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ad734u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ad738: 0xa4a2000a  sh          $v0, 0xA($a1)
    ctx->pc = 0x4ad738u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ad73c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4ad73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4ad740: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4ad740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4ad744: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4ad744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad748: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ad748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ad74c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ad74cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad750: 0xa48201b4  sh          $v0, 0x1B4($a0)
    ctx->pc = 0x4ad750u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 436), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ad754: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4ad754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad758: 0xa46001b6  sh          $zero, 0x1B6($v1)
    ctx->pc = 0x4ad758u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad75c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4ad75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad760: 0xa446000e  sh          $a2, 0xE($v0)
    ctx->pc = 0x4ad760u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x4ad764: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4ad764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad768: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD768u;
        // 0x4ad76c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD770u;
}
