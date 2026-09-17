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

// Function: sub_0035DC10
// Address: 0x35dc10 - 0x35dd60
void sub_0035DC10_0x35dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DC10_0x35dc10");
#endif

    switch (ctx->pc) {
        case 0x35dc38u: goto label_35dc38;
        case 0x35dc70u: goto label_35dc70;
        case 0x35dcc8u: goto label_35dcc8;
        case 0x35dcd8u: goto label_35dcd8;
        case 0x35dd28u: goto label_35dd28;
        default: break;
    }

    ctx->pc = 0x35dc10u;

    // 0x35dc10: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x35dc10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dc14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35dc14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35dc18: 0x2ce20031  sltiu       $v0, $a3, 0x31
    ctx->pc = 0x35dc18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
    // 0x35dc1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35dc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35dc20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35DC20u;
    {
        const bool branch_taken_0x35dc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DC20u;
        // 0x35dc24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dc20) {
            ctx->pc = 0x35DC40u;
            goto label_35dc40;
        }
    }
    ctx->pc = 0x35DC28u;
    // 0x35dc28: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35dc28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35dc2c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x35dc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dc30: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35DC30u;
    SET_GPR_U32(ctx, 31, 0x35DC38u);
    ctx->pc = 0x35DC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DC30u;
    // 0x35dc34: 0x24845c00  addiu       $a0, $a0, 0x5C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35DC30u, 0x35DC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC38u;
label_35dc38:
    // 0x35dc38: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x35DC38u;
    {
        const bool branch_taken_0x35dc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DC38u;
        // 0x35dc3c: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dc38) {
            ctx->pc = 0x35DCCCu;
            goto label_35dccc;
        }
    }
    ctx->pc = 0x35DC40u;
label_35dc40:
    // 0x35dc40: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x35DC40u;
    {
        const bool branch_taken_0x35dc40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DC40u;
        // 0x35dc44: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dc40) {
            ctx->pc = 0x35DCCCu;
            goto label_35dccc;
        }
    }
    ctx->pc = 0x35DC48u;
    // 0x35dc48: 0x8f83c7c8  lw          $v1, -0x3838($gp)
    ctx->pc = 0x35dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952904)));
    // 0x35dc4c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35dc50: 0x24421378  addiu       $v0, $v0, 0x1378
    ctx->pc = 0x35dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4984));
    // 0x35dc54: 0xdf86c7d0  ld          $a2, -0x3830($gp)
    ctx->pc = 0x35dc54u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294952912)));
    // 0x35dc58: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x35dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x35dc5c: 0x244813d5  addiu       $t0, $v0, 0x13D5
    ctx->pc = 0x35dc5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 5077));
    // 0x35dc60: 0xaf83c7c8  sw          $v1, -0x3838($gp)
    ctx->pc = 0x35dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952904), GPR_U32(ctx, 3));
    // 0x35dc64: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x35dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x35dc68: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x35dc68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dc6c: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x35dc6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35dc70:
    // 0x35dc70: 0x8b1014  dsllv       $v0, $t3, $a0
    ctx->pc = 0x35dc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x35dc74: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x35dc74u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x35dc78: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x35dc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x35dc7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35DC7Cu;
    {
        const bool branch_taken_0x35dc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DC7Cu;
        // 0x35dc80: 0x127102b  sltu        $v0, $t1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dc7c) {
            ctx->pc = 0x35DCA4u;
            goto label_35dca4;
        }
    }
    ctx->pc = 0x35DC84u;
    // 0x35dc84: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x35dc84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x35dc88: 0xa10a0000  sb          $t2, 0x0($t0)
    ctx->pc = 0x35dc88u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x35dc8c: 0xff86c7d0  sd          $a2, -0x3830($gp)
    ctx->pc = 0x35dc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294952912), GPR_U64(ctx, 6));
    // 0x35dc90: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x35dc90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x35dc94: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x35dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x35dc98: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x35dc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x35dc9c: 0xdf86c7d0  ld          $a2, -0x3830($gp)
    ctx->pc = 0x35dc9cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294952912)));
    // 0x35dca0: 0x127102b  sltu        $v0, $t1, $a3
    ctx->pc = 0x35dca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_35dca4:
    // 0x35dca4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35DCA4u;
    {
        const bool branch_taken_0x35dca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dca4) {
            ctx->pc = 0x35DCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DCA4u;
            // 0x35dca8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DCBCu;
            goto label_35dcbc;
        }
    }
    ctx->pc = 0x35DCACu;
    // 0x35dcac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x35dcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x35dcb0: 0x481ffef  bgez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x35DCB0u;
    {
        const bool branch_taken_0x35dcb0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x35DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DCB0u;
        // 0x35dcb4: 0x2508ff94  addiu       $t0, $t0, -0x6C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dcb0) {
            ctx->pc = 0x35DC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dc70;
        }
    }
    ctx->pc = 0x35DCB8u;
    // 0x35dcb8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35dcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_35dcbc:
    // 0x35dcbc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x35dcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dcc0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35DCC0u;
    SET_GPR_U32(ctx, 31, 0x35DCC8u);
    ctx->pc = 0x35DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DCC0u;
    // 0x35dcc4: 0x24845c38  addiu       $a0, $a0, 0x5C38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35DCC0u, 0x35DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DCC8u;
label_35dcc8:
    // 0x35dcc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35dcc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35dccc:
    // 0x35dccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35dcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35dcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x35DCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DCD0u;
        // 0x35dcd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DCD8u;
label_35dcd8:
    // 0x35dcd8: 0xdf83c7d0  ld          $v1, -0x3830($gp)
    ctx->pc = 0x35dcd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294952912)));
    // 0x35dcdc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35dcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dce0: 0x862814  dsllv       $a1, $a2, $a0
    ctx->pc = 0x35dce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x35dce4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x35dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35dce8: 0x654025  or          $t0, $v1, $a1
    ctx->pc = 0x35dce8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x35dcec: 0x831817  dsrav       $v1, $v1, $a0
    ctx->pc = 0x35dcecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x35dcf0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35dcf4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x35dcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x35dcf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35dcfc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35dcfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35dd00: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35dd04: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x35dd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35dd08: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35dd08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35dd0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35dd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35dd10: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x35dd10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35dd14: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35DD14u;
    {
        const bool branch_taken_0x35dd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD14u;
        // 0x35dd18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dd14) {
            ctx->pc = 0x35DD30u;
            goto label_35dd30;
        }
    }
    ctx->pc = 0x35DD1Cu;
    // 0x35dd1c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35dd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35dd20: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35DD20u;
    SET_GPR_U32(ctx, 31, 0x35DD28u);
    ctx->pc = 0x35DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DD20u;
    // 0x35dd24: 0x24845c70  addiu       $a0, $a0, 0x5C70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35DD20u, 0x35DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD28u;
label_35dd28:
    // 0x35dd28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x35DD28u;
    {
        const bool branch_taken_0x35dd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD28u;
        // 0x35dd2c: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dd28) {
            ctx->pc = 0x35DD50u;
            goto label_35dd50;
        }
    }
    ctx->pc = 0x35DD30u;
label_35dd30:
    // 0x35dd30: 0x8f83c7c8  lw          $v1, -0x3838($gp)
    ctx->pc = 0x35dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952904)));
    // 0x35dd34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35dd34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd38: 0xff88c7d0  sd          $t0, -0x3830($gp)
    ctx->pc = 0x35dd38u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294952912), GPR_U64(ctx, 8));
    // 0x35dd3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35dd40: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35dd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35dd44: 0x270821  addu        $at, $at, $a3
    ctx->pc = 0x35dd44u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x35dd48: 0xa0201379  sb          $zero, 0x1379($at)
    ctx->pc = 0x35dd48u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4985), (uint8_t)GPR_U32(ctx, 0));
    // 0x35dd4c: 0xaf83c7c8  sw          $v1, -0x3838($gp)
    ctx->pc = 0x35dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952904), GPR_U32(ctx, 3));
label_35dd50:
    // 0x35dd50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35dd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35dd54: 0x3e00008  jr          $ra
    ctx->pc = 0x35DD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD54u;
        // 0x35dd58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DD5Cu;
    // 0x35dd5c: 0x0  nop
    ctx->pc = 0x35dd5cu;
    // NOP
    ctx->pc = 0x35dd60u;
}
