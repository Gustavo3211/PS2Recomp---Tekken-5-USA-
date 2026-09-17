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

// Function: sub_00320968
// Address: 0x320968 - 0x320a28
void sub_00320968_0x320968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320968_0x320968");
#endif

    switch (ctx->pc) {
        case 0x320968u: goto label_320968;
        case 0x32096cu: goto label_32096c;
        case 0x320970u: goto label_320970;
        case 0x320974u: goto label_320974;
        case 0x320978u: goto label_320978;
        case 0x32097cu: goto label_32097c;
        case 0x320980u: goto label_320980;
        case 0x320984u: goto label_320984;
        case 0x320988u: goto label_320988;
        case 0x32098cu: goto label_32098c;
        case 0x320990u: goto label_320990;
        case 0x320994u: goto label_320994;
        case 0x320998u: goto label_320998;
        case 0x32099cu: goto label_32099c;
        case 0x3209a0u: goto label_3209a0;
        case 0x3209a4u: goto label_3209a4;
        case 0x3209a8u: goto label_3209a8;
        case 0x3209acu: goto label_3209ac;
        case 0x3209b0u: goto label_3209b0;
        case 0x3209b4u: goto label_3209b4;
        case 0x3209b8u: goto label_3209b8;
        case 0x3209bcu: goto label_3209bc;
        case 0x3209c0u: goto label_3209c0;
        case 0x3209c4u: goto label_3209c4;
        case 0x3209c8u: goto label_3209c8;
        case 0x3209ccu: goto label_3209cc;
        case 0x3209d0u: goto label_3209d0;
        case 0x3209d4u: goto label_3209d4;
        case 0x3209d8u: goto label_3209d8;
        case 0x3209dcu: goto label_3209dc;
        case 0x3209e0u: goto label_3209e0;
        case 0x3209e4u: goto label_3209e4;
        case 0x3209e8u: goto label_3209e8;
        case 0x3209ecu: goto label_3209ec;
        case 0x3209f0u: goto label_3209f0;
        case 0x3209f4u: goto label_3209f4;
        case 0x3209f8u: goto label_3209f8;
        case 0x3209fcu: goto label_3209fc;
        case 0x320a00u: goto label_320a00;
        case 0x320a04u: goto label_320a04;
        case 0x320a08u: goto label_320a08;
        case 0x320a0cu: goto label_320a0c;
        case 0x320a10u: goto label_320a10;
        case 0x320a14u: goto label_320a14;
        case 0x320a18u: goto label_320a18;
        case 0x320a1cu: goto label_320a1c;
        case 0x320a20u: goto label_320a20;
        case 0x320a24u: goto label_320a24;
        default: break;
    }

    ctx->pc = 0x320968u;

label_320968:
    // 0x320968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_32096c:
    // 0x32096c: 0x3c070044  lui         $a3, 0x44
    ctx->pc = 0x32096cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)68 << 16));
label_320970:
    // 0x320970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320974:
    // 0x320974: 0x24e7d6c0  addiu       $a3, $a3, -0x2940
    ctx->pc = 0x320974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956736));
label_320978:
    // 0x320978: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x320978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32097c:
    // 0x32097c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32097cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320980:
    // 0x320980: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x320980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_320984:
    // 0x320984: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x320984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_320988:
    // 0x320988: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_32098c:
    // 0x32098c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320990:
    // 0x320990: 0x40f809  jalr        $v0
label_320994:
    if (ctx->pc == 0x320994u) {
        ctx->pc = 0x320994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320990u;
        // 0x320994: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320998u;
        goto label_320998;
    }
    ctx->pc = 0x320990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320998u);
        ctx->pc = 0x320994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320990u;
        // 0x320994: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320990u, 0x320998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320998u;
label_320998:
    // 0x320998: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x320998u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_32099c:
    // 0x32099c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32099cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3209a0:
    // 0x3209a0: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x3209a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_3209a4:
    // 0x3209a4: 0x3e00008  jr          $ra
label_3209a8:
    if (ctx->pc == 0x3209A8u) {
        ctx->pc = 0x3209A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209A4u;
        // 0x3209a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3209ACu;
        goto label_3209ac;
    }
    ctx->pc = 0x3209A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3209A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209A4u;
        // 0x3209a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3209A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3209ACu;
label_3209ac:
    // 0x3209ac: 0x0  nop
    ctx->pc = 0x3209acu;
    // NOP
label_3209b0:
    // 0x3209b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3209b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3209b4:
    // 0x3209b4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3209b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_3209b8:
    // 0x3209b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3209b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3209bc:
    // 0x3209bc: 0x2484d6c0  addiu       $a0, $a0, -0x2940
    ctx->pc = 0x3209bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956736));
label_3209c0:
    // 0x3209c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3209c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3209c4:
    // 0x3209c4: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x3209c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_3209c8:
    // 0x3209c8: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x3209c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3209cc:
    // 0x3209cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3209ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3209d0:
    // 0x3209d0: 0x40f809  jalr        $v0
label_3209d4:
    if (ctx->pc == 0x3209D4u) {
        ctx->pc = 0x3209D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209D0u;
        // 0x3209d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3209D8u;
        goto label_3209d8;
    }
    ctx->pc = 0x3209D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3209D8u);
        ctx->pc = 0x3209D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209D0u;
        // 0x3209d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3209D0u, 0x3209D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3209D8u;
label_3209d8:
    // 0x3209d8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3209d8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3209dc:
    // 0x3209dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3209dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3209e0:
    // 0x3209e0: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x3209e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_3209e4:
    // 0x3209e4: 0x3e00008  jr          $ra
label_3209e8:
    if (ctx->pc == 0x3209E8u) {
        ctx->pc = 0x3209E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209E4u;
        // 0x3209e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3209ECu;
        goto label_3209ec;
    }
    ctx->pc = 0x3209E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3209E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209E4u;
        // 0x3209e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3209E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3209ECu;
label_3209ec:
    // 0x3209ec: 0x0  nop
    ctx->pc = 0x3209ecu;
    // NOP
label_3209f0:
    // 0x3209f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3209f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3209f4:
    // 0x3209f4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3209f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_3209f8:
    // 0x3209f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3209f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3209fc:
    // 0x3209fc: 0x2484d6c0  addiu       $a0, $a0, -0x2940
    ctx->pc = 0x3209fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956736));
label_320a00:
    // 0x320a00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x320a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_320a04:
    // 0x320a04: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x320a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_320a08:
    // 0x320a08: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x320a08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320a0c:
    // 0x320a0c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320a10:
    // 0x320a10: 0x40f809  jalr        $v0
label_320a14:
    if (ctx->pc == 0x320A14u) {
        ctx->pc = 0x320A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A10u;
        // 0x320a14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320A18u;
        goto label_320a18;
    }
    ctx->pc = 0x320A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320A18u);
        ctx->pc = 0x320A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A10u;
        // 0x320a14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320A10u, 0x320A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320A18u;
label_320a18:
    // 0x320a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320a1c:
    // 0x320a1c: 0x3e00008  jr          $ra
label_320a20:
    if (ctx->pc == 0x320A20u) {
        ctx->pc = 0x320A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A1Cu;
        // 0x320a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320A24u;
        goto label_320a24;
    }
    ctx->pc = 0x320A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A1Cu;
        // 0x320a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320A24u;
label_320a24:
    // 0x320a24: 0x0  nop
    ctx->pc = 0x320a24u;
    // NOP
    ctx->pc = 0x320a28u;
}
