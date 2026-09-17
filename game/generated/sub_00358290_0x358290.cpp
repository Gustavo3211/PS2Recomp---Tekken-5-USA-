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

// Function: sub_00358290
// Address: 0x358290 - 0x358368
void sub_00358290_0x358290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358290_0x358290");
#endif

    switch (ctx->pc) {
        case 0x3582f4u: goto label_3582f4;
        case 0x358310u: goto label_358310;
        default: break;
    }

    ctx->pc = 0x358290u;

    // 0x358290: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x358290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x358294: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x358294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x358298: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x358298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35829c: 0x8c42eb80  lw          $v0, -0x1480($v0)
    ctx->pc = 0x35829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962048)));
    // 0x3582a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3582A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3582A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3582A8u;
    // 0x3582a8: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3582a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3582ac: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3582acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3582b0: 0x2442eb80  addiu       $v0, $v0, -0x1480
    ctx->pc = 0x3582b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962048));
    // 0x3582b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3582b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3582b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3582b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3582bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3582bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3582c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3582C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3582C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3582C0u;
        // 0x3582c4: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3582C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3582C8u;
    // 0x3582c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3582c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3582cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3582ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3582d0: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x3582d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
    // 0x3582d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3582d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3582d8: 0x488c0  sll         $s1, $a0, 3
    ctx->pc = 0x3582d8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3582dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3582dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3582e0: 0x2610eb80  addiu       $s0, $s0, -0x1480
    ctx->pc = 0x3582e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962048));
    // 0x3582e4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x3582e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3582e8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x3582e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3582ec: 0xc04a125  jal         func_128494
    ctx->pc = 0x3582ECu;
    SET_GPR_U32(ctx, 31, 0x3582F4u);
    ctx->pc = 0x3582F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3582ECu;
    // 0x3582f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x3582ECu, 0x3582F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3582F4u;
label_3582f4:
    // 0x3582f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3582f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3582f8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3582f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3582fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3582fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x358304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358308: 0x3e00008  jr          $ra
    ctx->pc = 0x358308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358308u;
        // 0x35830c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358310u;
label_358310:
    // 0x358310: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x358310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x358314: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x358314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x358318: 0x3c01001c  lui         $at, 0x1C
    ctx->pc = 0x358318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28 << 16));
    // 0x35831c: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x35831cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x358320: 0xc420e784  lwc1        $f0, -0x187C($at)
    ctx->pc = 0x358320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294961028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358324: 0x3e00008  jr          $ra
    ctx->pc = 0x358324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35832Cu;
    // 0x35832c: 0x0  nop
    ctx->pc = 0x35832cu;
    // NOP
    // 0x358330: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x358330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x358334: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x358334u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x358338: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x358338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x35833c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x358340: 0x8442e788  lh          $v0, -0x1878($v0)
    ctx->pc = 0x358340u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961032)));
    // 0x358344: 0x3e00008  jr          $ra
    ctx->pc = 0x358344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35834Cu;
    // 0x35834c: 0x0  nop
    ctx->pc = 0x35834cu;
    // NOP
    // 0x358350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358354: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x358354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x358358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35835c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35835cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358360: 0x80d60c4  j           func_358310
    ctx->pc = 0x358360u;
    ctx->pc = 0x358364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358360u;
    // 0x358364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358310u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_358310;
    ctx->pc = 0x358368u;
}
