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

// Function: sub_00341430
// Address: 0x341430 - 0x3414d0
void sub_00341430_0x341430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341430_0x341430");
#endif

    switch (ctx->pc) {
        case 0x341430u: goto label_341430;
        case 0x341434u: goto label_341434;
        case 0x341438u: goto label_341438;
        case 0x34143cu: goto label_34143c;
        case 0x341440u: goto label_341440;
        case 0x341444u: goto label_341444;
        case 0x341448u: goto label_341448;
        case 0x34144cu: goto label_34144c;
        case 0x341450u: goto label_341450;
        case 0x341454u: goto label_341454;
        case 0x341458u: goto label_341458;
        case 0x34145cu: goto label_34145c;
        case 0x341460u: goto label_341460;
        case 0x341464u: goto label_341464;
        case 0x341468u: goto label_341468;
        case 0x34146cu: goto label_34146c;
        case 0x341470u: goto label_341470;
        case 0x341474u: goto label_341474;
        case 0x341478u: goto label_341478;
        case 0x34147cu: goto label_34147c;
        case 0x341480u: goto label_341480;
        case 0x341484u: goto label_341484;
        case 0x341488u: goto label_341488;
        case 0x34148cu: goto label_34148c;
        case 0x341490u: goto label_341490;
        case 0x341494u: goto label_341494;
        case 0x341498u: goto label_341498;
        case 0x34149cu: goto label_34149c;
        case 0x3414a0u: goto label_3414a0;
        case 0x3414a4u: goto label_3414a4;
        case 0x3414a8u: goto label_3414a8;
        case 0x3414acu: goto label_3414ac;
        case 0x3414b0u: goto label_3414b0;
        case 0x3414b4u: goto label_3414b4;
        case 0x3414b8u: goto label_3414b8;
        case 0x3414bcu: goto label_3414bc;
        case 0x3414c0u: goto label_3414c0;
        case 0x3414c4u: goto label_3414c4;
        case 0x3414c8u: goto label_3414c8;
        case 0x3414ccu: goto label_3414cc;
        default: break;
    }

    ctx->pc = 0x341430u;

label_341430:
    // 0x341430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_341434:
    // 0x341434: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x341434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_341438:
    // 0x341438: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x341438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34143c:
    // 0x34143c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34143cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_341440:
    // 0x341440: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x341440u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_341444:
    // 0x341444: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x341444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_341448:
    // 0x341448: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_34144c:
    if (ctx->pc == 0x34144Cu) {
        ctx->pc = 0x34144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341448u;
        // 0x34144c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341450u;
        goto label_341450;
    }
    ctx->pc = 0x341448u;
    {
        const bool branch_taken_0x341448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341448u;
        // 0x34144c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341448) {
            ctx->pc = 0x3414BCu;
            goto label_3414bc;
        }
    }
    ctx->pc = 0x341450u;
label_341450:
    // 0x341450: 0xc0c8864  jal         func_322190
label_341454:
    if (ctx->pc == 0x341454u) {
        ctx->pc = 0x341458u;
        goto label_341458;
    }
    ctx->pc = 0x341450u;
    SET_GPR_U32(ctx, 31, 0x341458u);
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x341450u, 0x341458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341458u;
label_341458:
    // 0x341458: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x341458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34145c:
    // 0x34145c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x34145cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_341460:
    // 0x341460: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x341460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_341464:
    // 0x341464: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x341464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_341468:
    // 0x341468: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x341468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34146c:
    // 0x34146c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x34146cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_341470:
    // 0x341470: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x341470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_341474:
    // 0x341474: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_341478:
    if (ctx->pc == 0x341478u) {
        ctx->pc = 0x341478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341474u;
        // 0x341478: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34147Cu;
        goto label_34147c;
    }
    ctx->pc = 0x341474u;
    {
        const bool branch_taken_0x341474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341474u;
        // 0x341478: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341474) {
            ctx->pc = 0x3414B8u;
            goto label_3414b8;
        }
    }
    ctx->pc = 0x34147Cu;
label_34147c:
    // 0x34147c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x34147cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_341480:
    // 0x341480: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x341480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_341484:
    // 0x341484: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x341484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_341488:
    // 0x341488: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x341488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_34148c:
    // 0x34148c: 0x40f809  jalr        $v0
label_341490:
    if (ctx->pc == 0x341490u) {
        ctx->pc = 0x341490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34148Cu;
        // 0x341490: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341494u;
        goto label_341494;
    }
    ctx->pc = 0x34148Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341494u);
        ctx->pc = 0x341490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34148Cu;
        // 0x341490: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34148Cu, 0x341494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341494u;
label_341494:
    // 0x341494: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_341498:
    if (ctx->pc == 0x341498u) {
        ctx->pc = 0x341498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341494u;
        // 0x341498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34149Cu;
        goto label_34149c;
    }
    ctx->pc = 0x341494u;
    {
        const bool branch_taken_0x341494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341494) {
            ctx->pc = 0x341498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341494u;
            // 0x341498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3414BCu;
            goto label_3414bc;
        }
    }
    ctx->pc = 0x34149Cu;
label_34149c:
    // 0x34149c: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x34149cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_3414a0:
    // 0x3414a0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3414a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3414a4:
    // 0x3414a4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3414a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_3414a8:
    // 0x3414a8: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x3414a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
label_3414ac:
    // 0x3414ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_3414b0:
    if (ctx->pc == 0x3414B0u) {
        ctx->pc = 0x3414B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414ACu;
        // 0x3414b0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3414B4u;
        goto label_3414b4;
    }
    ctx->pc = 0x3414ACu;
    {
        const bool branch_taken_0x3414ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3414B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414ACu;
        // 0x3414b0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3414ac) {
            ctx->pc = 0x3414BCu;
            goto label_3414bc;
        }
    }
    ctx->pc = 0x3414B4u;
label_3414b4:
    // 0x3414b4: 0x0  nop
    ctx->pc = 0x3414b4u;
    // NOP
label_3414b8:
    // 0x3414b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3414b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3414bc:
    // 0x3414bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3414bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3414c0:
    // 0x3414c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3414c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3414c4:
    // 0x3414c4: 0x3e00008  jr          $ra
label_3414c8:
    if (ctx->pc == 0x3414C8u) {
        ctx->pc = 0x3414C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414C4u;
        // 0x3414c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3414CCu;
        goto label_3414cc;
    }
    ctx->pc = 0x3414C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3414C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414C4u;
        // 0x3414c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3414C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3414CCu;
label_3414cc:
    // 0x3414cc: 0x0  nop
    ctx->pc = 0x3414ccu;
    // NOP
    ctx->pc = 0x3414d0u;
}
