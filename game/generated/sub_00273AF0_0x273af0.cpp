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

// Function: sub_00273AF0
// Address: 0x273af0 - 0x2742e8
void sub_00273AF0_0x273af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273AF0_0x273af0");
#endif

    switch (ctx->pc) {
        case 0x273b10u: goto label_273b10;
        case 0x273b44u: goto label_273b44;
        case 0x273bc8u: goto label_273bc8;
        case 0x273bd8u: goto label_273bd8;
        case 0x273bf8u: goto label_273bf8;
        case 0x273c08u: goto label_273c08;
        case 0x273c1cu: goto label_273c1c;
        case 0x273cccu: goto label_273ccc;
        case 0x273cf8u: goto label_273cf8;
        case 0x273e30u: goto label_273e30;
        case 0x273e3cu: goto label_273e3c;
        case 0x273e58u: goto label_273e58;
        case 0x273e60u: goto label_273e60;
        case 0x273eb0u: goto label_273eb0;
        case 0x273fb0u: goto label_273fb0;
        case 0x273fdcu: goto label_273fdc;
        case 0x274004u: goto label_274004;
        case 0x274040u: goto label_274040;
        case 0x2740dcu: goto label_2740dc;
        case 0x2741b4u: goto label_2741b4;
        case 0x2741c8u: goto label_2741c8;
        case 0x2741d0u: goto label_2741d0;
        case 0x2741f0u: goto label_2741f0;
        case 0x274228u: goto label_274228;
        case 0x274280u: goto label_274280;
        case 0x2742a0u: goto label_2742a0;
        default: break;
    }

    ctx->pc = 0x273af0u;

    // 0x273af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x273af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x273af8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x273af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273afc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x273afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x273b00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x273b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x273b04: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x273b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x273b08: 0xc09cbc4  jal         func_272F10
    ctx->pc = 0x273B08u;
    SET_GPR_U32(ctx, 31, 0x273B10u);
    ctx->pc = 0x273B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B08u;
    // 0x273b0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272F10u, 0x273B08u, 0x273B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B10u;
label_273b10:
    // 0x273b10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x273b10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b14: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x273b14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x273b18: 0x104001ed  beqz        $v0, . + 4 + (0x1ED << 2)
    ctx->pc = 0x273B18u;
    {
        const bool branch_taken_0x273b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B18u;
        // 0x273b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b18) {
            ctx->pc = 0x2742D0u;
            goto label_2742d0;
        }
    }
    ctx->pc = 0x273B20u;
    // 0x273b20: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273b24: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x273b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x273b28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x273b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273b2c: 0x8c632d00  lw          $v1, 0x2D00($v1)
    ctx->pc = 0x273b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11520)));
    // 0x273b30: 0x600008  jr          $v1
    ctx->pc = 0x273B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273B38u: goto label_273b38;
            case 0x273B70u: goto label_273b70;
            case 0x273C00u: goto label_273c00;
            case 0x273C40u: goto label_273c40;
            case 0x2741E8u: goto label_2741e8;
            case 0x274208u: goto label_274208;
            case 0x274218u: goto label_274218;
            case 0x274240u: goto label_274240;
            case 0x274260u: goto label_274260;
            case 0x274288u: goto label_274288;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273B30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273B38u;
label_273b38:
    // 0x273b38: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x273b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x273b3c: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x273B3Cu;
    SET_GPR_U32(ctx, 31, 0x273B44u);
    ctx->pc = 0x273B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B3Cu;
    // 0x273b40: 0x2484c760  addiu       $a0, $a0, -0x38A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x273B3Cu, 0x273B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B44u;
label_273b44:
    // 0x273b44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b48: 0x1a0001cf  blez        $s0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x273B48u;
    {
        const bool branch_taken_0x273b48 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x273B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B48u;
        // 0x273b4c: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b48) {
            ctx->pc = 0x274288u;
            goto label_274288;
        }
    }
    ctx->pc = 0x273B50u;
    // 0x273b50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273b54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x273b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273b58: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x273b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273b5c: 0xac8300d8  sw          $v1, 0xD8($a0)
    ctx->pc = 0x273b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 3));
    // 0x273b60: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x273b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273b64: 0x100001c8  b           . + 4 + (0x1C8 << 2)
    ctx->pc = 0x273B64u;
    {
        const bool branch_taken_0x273b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B64u;
        // 0x273b68: 0xac45008c  sw          $a1, 0x8C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b64) {
            ctx->pc = 0x274288u;
            goto label_274288;
        }
    }
    ctx->pc = 0x273B6Cu;
    // 0x273b6c: 0x0  nop
    ctx->pc = 0x273b6cu;
    // NOP
label_273b70:
    // 0x273b70: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x273b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273b74: 0x8c62029c  lw          $v0, 0x29C($v1)
    ctx->pc = 0x273b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 668)));
    // 0x273b78: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x273B78u;
    {
        const bool branch_taken_0x273b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273b78) {
            ctx->pc = 0x273B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273B78u;
            // 0x273b7c: 0x8c640330  lw          $a0, 0x330($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273B90u;
            goto label_273b90;
        }
    }
    ctx->pc = 0x273B80u;
    // 0x273b80: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x273b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x273b84: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x273B84u;
    {
        const bool branch_taken_0x273b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B84u;
        // 0x273b88: 0x2484bf20  addiu       $a0, $a0, -0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b84) {
            ctx->pc = 0x273BC0u;
            goto label_273bc0;
        }
    }
    ctx->pc = 0x273B8Cu;
    // 0x273b8c: 0x0  nop
    ctx->pc = 0x273b8cu;
    // NOP
label_273b90:
    // 0x273b90: 0x24020707  addiu       $v0, $zero, 0x707
    ctx->pc = 0x273b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1799));
    // 0x273b94: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x273B94u;
    {
        const bool branch_taken_0x273b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x273B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B94u;
        // 0x273b98: 0x24020806  addiu       $v0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b94) {
            ctx->pc = 0x273BB8u;
            goto label_273bb8;
        }
    }
    ctx->pc = 0x273B9Cu;
    // 0x273b9c: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x273B9Cu;
    {
        const bool branch_taken_0x273b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x273BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B9Cu;
        // 0x273ba0: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b9c) {
            ctx->pc = 0x273BB8u;
            goto label_273bb8;
        }
    }
    ctx->pc = 0x273BA4u;
    // 0x273ba4: 0x8c63032c  lw          $v1, 0x32C($v1)
    ctx->pc = 0x273ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
    // 0x273ba8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x273ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x273bac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x273bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x273bb0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x273BB0u;
    {
        const bool branch_taken_0x273bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BB0u;
        // 0x273bb4: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bb0) {
            ctx->pc = 0x273BD0u;
            goto label_273bd0;
        }
    }
    ctx->pc = 0x273BB8u;
label_273bb8:
    // 0x273bb8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x273bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x273bbc: 0x2484c608  addiu       $a0, $a0, -0x39F8
    ctx->pc = 0x273bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952456));
label_273bc0:
    // 0x273bc0: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x273BC0u;
    SET_GPR_U32(ctx, 31, 0x273BC8u);
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x273BC0u, 0x273BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273BC8u;
label_273bc8:
    // 0x273bc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x273BC8u;
    {
        const bool branch_taken_0x273bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BC8u;
        // 0x273bcc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bc8) {
            ctx->pc = 0x273BDCu;
            goto label_273bdc;
        }
    }
    ctx->pc = 0x273BD0u;
label_273bd0:
    // 0x273bd0: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x273BD0u;
    SET_GPR_U32(ctx, 31, 0x273BD8u);
    ctx->pc = 0x273BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273BD0u;
    // 0x273bd4: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x273BD0u, 0x273BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273BD8u;
label_273bd8:
    // 0x273bd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273bdc:
    // 0x273bdc: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x273bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273be0: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x273be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x273be4: 0x8c430330  lw          $v1, 0x330($v0)
    ctx->pc = 0x273be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x273be8: 0x14640190  bne         $v1, $a0, . + 4 + (0x190 << 2)
    ctx->pc = 0x273BE8u;
    {
        const bool branch_taken_0x273be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x273BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BE8u;
        // 0x273bec: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273be8) {
            ctx->pc = 0x27422Cu;
            goto label_27422c;
        }
    }
    ctx->pc = 0x273BF0u;
    // 0x273bf0: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x273BF0u;
    SET_GPR_U32(ctx, 31, 0x273BF8u);
    ctx->pc = 0x273BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273BF0u;
    // 0x273bf4: 0x2484c6d0  addiu       $a0, $a0, -0x3930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x273BF0u, 0x273BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273BF8u;
label_273bf8:
    // 0x273bf8: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x273BF8u;
    {
        const bool branch_taken_0x273bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BF8u;
        // 0x273bfc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bf8) {
            ctx->pc = 0x27422Cu;
            goto label_27422c;
        }
    }
    ctx->pc = 0x273C00u;
label_273c00:
    // 0x273c00: 0xc09b2aa  jal         func_26CAA8
    ctx->pc = 0x273C00u;
    SET_GPR_U32(ctx, 31, 0x273C08u);
    ctx->pc = 0x26CAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CAA8u, 0x273C00u, 0x273C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273C08u;
label_273c08:
    // 0x273c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c0c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x273C0Cu;
    {
        const bool branch_taken_0x273c0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x273C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C0Cu;
        // 0x273c10: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c0c) {
            ctx->pc = 0x273C30u;
            goto label_273c30;
        }
    }
    ctx->pc = 0x273C14u;
    // 0x273c14: 0xc09bb60  jal         func_26ED80
    ctx->pc = 0x273C14u;
    SET_GPR_U32(ctx, 31, 0x273C1Cu);
    ctx->pc = 0x26ED80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ED80u, 0x273C14u, 0x273C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273C1Cu;
label_273c1c:
    // 0x273c1c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x273c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273c20: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x273c20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x273c24: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x273C24u;
    {
        const bool branch_taken_0x273c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C24u;
        // 0x273c28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c24) {
            ctx->pc = 0x2742D0u;
            goto label_2742d0;
        }
    }
    ctx->pc = 0x273C2Cu;
    // 0x273c2c: 0x0  nop
    ctx->pc = 0x273c2cu;
    // NOP
label_273c30:
    // 0x273c30: 0x120301a7  beq         $s0, $v1, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x273C30u;
    {
        const bool branch_taken_0x273c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x273C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C30u;
        // 0x273c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c30) {
            ctx->pc = 0x2742D0u;
            goto label_2742d0;
        }
    }
    ctx->pc = 0x273C38u;
    // 0x273c38: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x273C38u;
    {
        const bool branch_taken_0x273c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C38u;
        // 0x273c3c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c38) {
            ctx->pc = 0x274288u;
            goto label_274288;
        }
    }
    ctx->pc = 0x273C40u;
label_273c40:
    // 0x273c40: 0x8f91aa78  lw          $s1, -0x5588($gp)
    ctx->pc = 0x273c40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273c44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c48: 0x8e2302bc  lw          $v1, 0x2BC($s1)
    ctx->pc = 0x273c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x273c4c: 0x146001a0  bnez        $v1, . + 4 + (0x1A0 << 2)
    ctx->pc = 0x273C4Cu;
    {
        const bool branch_taken_0x273c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C4Cu;
        // 0x273c50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c4c) {
            ctx->pc = 0x2742D0u;
            goto label_2742d0;
        }
    }
    ctx->pc = 0x273C54u;
    // 0x273c54: 0xc780ca30  lwc1        $f0, -0x35D0($gp)
    ctx->pc = 0x273c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294953520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273c58: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x273c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x273c5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x273c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273c60: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x273c60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x273c64: 0x44121000  mfc1        $s2, $f2
    ctx->pc = 0x273c64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x273c68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x273c68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273c6c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x273C6Cu;
    {
        const bool branch_taken_0x273c6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273c6c) {
            ctx->pc = 0x273C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273C6Cu;
            // 0x273c70: 0x8cc300f0  lw          $v1, 0xF0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273C8Cu;
            goto label_273c8c;
        }
    }
    ctx->pc = 0x273C74u;
    // 0x273c74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x273c74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x273c78: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x273c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x273c7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x273c7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x273c80: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x273c80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x273c84: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x273c84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x273c88: 0x8cc300f0  lw          $v1, 0xF0($a2)
    ctx->pc = 0x273c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
label_273c8c:
    // 0x273c8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273c90: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x273C90u;
    {
        const bool branch_taken_0x273c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x273C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C90u;
        // 0x273c94: 0x8f84aa80  lw          $a0, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c90) {
            ctx->pc = 0x273D44u;
            goto label_273d44;
        }
    }
    ctx->pc = 0x273C98u;
    // 0x273c98: 0x2405486f  addiu       $a1, $zero, 0x486F
    ctx->pc = 0x273c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18543));
    // 0x273c9c: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x273c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x273ca0: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x273ca0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x273ca4: 0x54650004  bnel        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x273CA4u;
    {
        const bool branch_taken_0x273ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x273ca4) {
            ctx->pc = 0x273CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273CA4u;
            // 0x273ca8: 0x8cc20018  lw          $v0, 0x18($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273CB8u;
            goto label_273cb8;
        }
    }
    ctx->pc = 0x273CACu;
    // 0x273cac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x273cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x273cb0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x273CB0u;
    {
        const bool branch_taken_0x273cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CB0u;
        // 0x273cb4: 0xacc200f0  sw          $v0, 0xF0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273cb0) {
            ctx->pc = 0x273D3Cu;
            goto label_273d3c;
        }
    }
    ctx->pc = 0x273CB8u;
label_273cb8:
    // 0x273cb8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x273cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x273cbc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x273CBCu;
    {
        const bool branch_taken_0x273cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273cbc) {
            ctx->pc = 0x273CF0u;
            goto label_273cf0;
        }
    }
    ctx->pc = 0x273CC4u;
    // 0x273cc4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x273CC4u;
    SET_GPR_U32(ctx, 31, 0x273CCCu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x273CC4u, 0x273CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CCCu;
label_273ccc:
    // 0x273ccc: 0x8f91aa78  lw          $s1, -0x5588($gp)
    ctx->pc = 0x273cccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273cd0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x273cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x273cd4: 0x86230380  lh          $v1, 0x380($s1)
    ctx->pc = 0x273cd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x273cd8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x273cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x273cdc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273CDCu;
    {
        const bool branch_taken_0x273cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CDCu;
        // 0x273ce0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273cdc) {
            ctx->pc = 0x273CF0u;
            goto label_273cf0;
        }
    }
    ctx->pc = 0x273CE4u;
    // 0x273ce4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x273CE4u;
    {
        const bool branch_taken_0x273ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CE4u;
        // 0x273ce8: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ce4) {
            ctx->pc = 0x273D3Cu;
            goto label_273d3c;
        }
    }
    ctx->pc = 0x273CECu;
    // 0x273cec: 0x0  nop
    ctx->pc = 0x273cecu;
    // NOP
label_273cf0:
    // 0x273cf0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x273CF0u;
    SET_GPR_U32(ctx, 31, 0x273CF8u);
    ctx->pc = 0x273CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273CF0u;
    // 0x273cf4: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x273CF0u, 0x273CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CF8u;
label_273cf8:
    // 0x273cf8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x273cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x273cfc: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x273cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x273d00: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x273d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x273d04: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x273d04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x273d08: 0x26102ce0  addiu       $s0, $s0, 0x2CE0
    ctx->pc = 0x273d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11488));
    // 0x273d0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x273d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x273d10: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273d14: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x273d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x273d18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273d1c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x273d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x273d20: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x273d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x273d24: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x273d24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x273d28: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x273d28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x273d2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x273d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x273d30: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x273d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x273d34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x273d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x273d38: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x273d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
label_273d3c:
    // 0x273d3c: 0x8f91aa78  lw          $s1, -0x5588($gp)
    ctx->pc = 0x273d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273d40: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x273d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
label_273d44:
    // 0x273d44: 0x2645fea2  addiu       $a1, $s2, -0x15E
    ctx->pc = 0x273d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966946));
    // 0x273d48: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x273d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x273d4c: 0x8483003e  lh          $v1, 0x3E($a0)
    ctx->pc = 0x273d4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x273d50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x273d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x273d54: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x273d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x273d58: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x273d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x273d5c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x273D5Cu;
    {
        const bool branch_taken_0x273d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D5Cu;
        // 0x273d60: 0xa3900a  movz        $s2, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d5c) {
            ctx->pc = 0x273D88u;
            goto label_273d88;
        }
    }
    ctx->pc = 0x273D64u;
    // 0x273d64: 0x2a420b87  slti        $v0, $s2, 0xB87
    ctx->pc = 0x273d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2951) ? 1 : 0);
    // 0x273d68: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x273D68u;
    {
        const bool branch_taken_0x273d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273d68) {
            ctx->pc = 0x273D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273D68u;
            // 0x273d6c: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273D8Cu;
            goto label_273d8c;
        }
    }
    ctx->pc = 0x273D70u;
    // 0x273d70: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x273d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x273d74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273d78: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x273d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273d7c: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x273D7Cu;
    {
        const bool branch_taken_0x273d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D7Cu;
        // 0x273d80: 0xa4400006  sh          $zero, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d7c) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x273D84u;
    // 0x273d84: 0x0  nop
    ctx->pc = 0x273d84u;
    // NOP
label_273d88:
    // 0x273d88: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x273d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_273d8c:
    // 0x273d8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x273d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x273d90: 0x2c430008  sltiu       $v1, $v0, 0x8
    ctx->pc = 0x273d90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x273d94: 0x10600111  beqz        $v1, . + 4 + (0x111 << 2)
    ctx->pc = 0x273D94u;
    {
        const bool branch_taken_0x273d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D94u;
        // 0x273d98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d94) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x273D9Cu;
    // 0x273d9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x273d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x273da0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x273da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x273da4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x273da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273da8: 0x8c632d30  lw          $v1, 0x2D30($v1)
    ctx->pc = 0x273da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11568)));
    // 0x273dac: 0x600008  jr          $v1
    ctx->pc = 0x273DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273DB8u: goto label_273db8;
            case 0x273F18u: goto label_273f18;
            case 0x273FE8u: goto label_273fe8;
            case 0x274058u: goto label_274058;
            case 0x274100u: goto label_274100;
            case 0x2741D8u: goto label_2741d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273DACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273DB4u;
    // 0x273db4: 0x0  nop
    ctx->pc = 0x273db4u;
    // NOP
label_273db8:
    // 0x273db8: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x273db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x273dbc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x273dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x273dc0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x273dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273dc4: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x273dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273dc8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x273dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x273dcc: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x273dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273dd0: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x273dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x273dd4: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x273dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273dd8: 0xac500064  sw          $s0, 0x64($v0)
    ctx->pc = 0x273dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 16));
    // 0x273ddc: 0x8f85aa80  lw          $a1, -0x5580($gp)
    ctx->pc = 0x273ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x273de0: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x273de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x273de4: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x273de4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x273de8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x273DE8u;
    {
        const bool branch_taken_0x273de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DE8u;
        // 0x273dec: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273de8) {
            ctx->pc = 0x273E08u;
            goto label_273e08;
        }
    }
    ctx->pc = 0x273DF0u;
    // 0x273df0: 0x94620046  lhu         $v0, 0x46($v1)
    ctx->pc = 0x273df0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x273df4: 0x84a30096  lh          $v1, 0x96($a1)
    ctx->pc = 0x273df4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x273df8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x273df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x273dfc: 0x144000f7  bnez        $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x273DFCu;
    {
        const bool branch_taken_0x273dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DFCu;
        // 0x273e00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273dfc) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x273E04u;
    // 0x273e04: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x273e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_273e08:
    // 0x273e08: 0x8c830298  lw          $v1, 0x298($a0)
    ctx->pc = 0x273e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x273e0c: 0x2862001d  slti        $v0, $v1, 0x1D
    ctx->pc = 0x273e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x273e10: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x273E10u;
    {
        const bool branch_taken_0x273e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E10u;
        // 0x273e14: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e10) {
            ctx->pc = 0x273E68u;
            goto label_273e68;
        }
    }
    ctx->pc = 0x273E18u;
    // 0x273e18: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x273e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x273e1c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x273e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x273e20: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x273E20u;
    {
        const bool branch_taken_0x273e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273e20) {
            ctx->pc = 0x273E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273E20u;
            // 0x273e24: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273E50u;
            goto label_273e50;
        }
    }
    ctx->pc = 0x273E28u;
    // 0x273e28: 0xc09d13a  jal         func_2744E8
    ctx->pc = 0x273E28u;
    SET_GPR_U32(ctx, 31, 0x273E30u);
    ctx->pc = 0x2744E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744E8u, 0x273E28u, 0x273E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E30u;
label_273e30:
    // 0x273e30: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x273e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273e34: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x273E34u;
    SET_GPR_U32(ctx, 31, 0x273E3Cu);
    ctx->pc = 0x273E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E34u;
    // 0x273e38: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x273E34u, 0x273E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E3Cu;
label_273e3c:
    // 0x273e3c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x273e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273e40: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x273e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x273e44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273e48: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x273E48u;
    {
        const bool branch_taken_0x273e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E48u;
        // 0x273e4c: 0xac62008c  sw          $v0, 0x8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e48) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x273E50u;
label_273e50:
    // 0x273e50: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x273E50u;
    SET_GPR_U32(ctx, 31, 0x273E58u);
    ctx->pc = 0x273E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E50u;
    // 0x273e54: 0x2484be18  addiu       $a0, $a0, -0x41E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x273E50u, 0x273E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E58u;
label_273e58:
    // 0x273e58: 0x5c4000e0  bgtzl       $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x273E58u;
    {
        const bool branch_taken_0x273e58 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x273e58) {
            ctx->pc = 0x273E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273E58u;
            // 0x273e5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x273E60u;
label_273e60:
    // 0x273e60: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x273E60u;
    {
        const bool branch_taken_0x273e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E60u;
        // 0x273e64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e60) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x273E68u;
label_273e68:
    // 0x273e68: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x273E68u;
    {
        const bool branch_taken_0x273e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E68u;
        // 0x273e6c: 0x2a420b87  slti        $v0, $s2, 0xB87 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2951) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e68) {
            ctx->pc = 0x273EF0u;
            goto label_273ef0;
        }
    }
    ctx->pc = 0x273E70u;
    // 0x273e70: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x273E70u;
    {
        const bool branch_taken_0x273e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273e70) {
            ctx->pc = 0x273E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273E70u;
            // 0x273e74: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273E98u;
            goto label_273e98;
        }
    }
    ctx->pc = 0x273E78u;
    // 0x273e78: 0x0  nop
    ctx->pc = 0x273e78u;
    // NOP
    // 0x273e7c: 0x0  nop
    ctx->pc = 0x273e7cu;
    // NOP
    // 0x273e80: 0x0  nop
    ctx->pc = 0x273e80u;
    // NOP
    // 0x273e84: 0x0  nop
    ctx->pc = 0x273e84u;
    // NOP
    // 0x273e88: 0x0  nop
    ctx->pc = 0x273e88u;
    // NOP
    // 0x273e8c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x273E8Cu;
    {
        const bool branch_taken_0x273e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E8Cu;
        // 0x273e90: 0xa4800006  sh          $zero, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e8c) {
            ctx->pc = 0x273E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273e60;
        }
    }
    ctx->pc = 0x273E94u;
    // 0x273e94: 0x0  nop
    ctx->pc = 0x273e94u;
    // NOP
label_273e98:
    // 0x273e98: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x273e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x273e9c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x273E9Cu;
    {
        const bool branch_taken_0x273e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273e9c) {
            ctx->pc = 0x273EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273E9Cu;
            // 0x273ea0: 0x84a20080  lh          $v0, 0x80($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273EC8u;
            goto label_273ec8;
        }
    }
    ctx->pc = 0x273EA4u;
    // 0x273ea4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x273ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x273ea8: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x273EA8u;
    SET_GPR_U32(ctx, 31, 0x273EB0u);
    ctx->pc = 0x273EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273EA8u;
    // 0x273eac: 0x2484be18  addiu       $a0, $a0, -0x41E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x273EA8u, 0x273EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273EB0u;
label_273eb0:
    // 0x273eb0: 0x184000ca  blez        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x273EB0u;
    {
        const bool branch_taken_0x273eb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x273EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EB0u;
        // 0x273eb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273eb0) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x273EB8u;
    // 0x273eb8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x273eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273ebc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x273ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ec0: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x273EC0u;
    {
        const bool branch_taken_0x273ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EC0u;
        // 0x273ec4: 0xac50008c  sw          $s0, 0x8C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ec0) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x273EC8u;
label_273ec8:
    // 0x273ec8: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x273ec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x273ecc: 0x504000c3  beql        $v0, $zero, . + 4 + (0xC3 << 2)
    ctx->pc = 0x273ECCu;
    {
        const bool branch_taken_0x273ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273ecc) {
            ctx->pc = 0x273ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273ECCu;
            // 0x273ed0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x273ED4u;
    // 0x273ed4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x273ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x273ed8: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x273ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x273edc: 0xac8200f0  sw          $v0, 0xF0($a0)
    ctx->pc = 0x273edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
    // 0x273ee0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273ee4: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x273ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273ee8: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x273EE8u;
    {
        const bool branch_taken_0x273ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EE8u;
        // 0x273eec: 0xa4430006  sh          $v1, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ee8) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x273EF0u;
label_273ef0:
    // 0x273ef0: 0x5040ffdb  beql        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x273EF0u;
    {
        const bool branch_taken_0x273ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273ef0) {
            ctx->pc = 0x273EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273EF0u;
            // 0x273ef4: 0xa4800006  sh          $zero, 0x6($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273e60;
        }
    }
    ctx->pc = 0x273EF8u;
    // 0x273ef8: 0x84a20080  lh          $v0, 0x80($a1)
    ctx->pc = 0x273ef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x273efc: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x273efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x273f00: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x273F00u;
    {
        const bool branch_taken_0x273f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273f00) {
            ctx->pc = 0x273F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273F00u;
            // 0x273f04: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273F10u;
            goto label_273f10;
        }
    }
    ctx->pc = 0x273F08u;
    // 0x273f08: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x273F08u;
    {
        const bool branch_taken_0x273f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F08u;
        // 0x273f0c: 0xa4800006  sh          $zero, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f08) {
            ctx->pc = 0x273E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273e60;
        }
    }
    ctx->pc = 0x273F10u;
label_273f10:
    // 0x273f10: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x273F10u;
    {
        const bool branch_taken_0x273f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F10u;
        // 0x273f14: 0xa4820006  sh          $v0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f10) {
            ctx->pc = 0x273E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273e60;
        }
    }
    ctx->pc = 0x273F18u;
label_273f18:
    // 0x273f18: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x273f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x273f1c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x273f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x273f20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x273f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273f24: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x273f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273f28: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x273f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x273f2c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x273f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273f30: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x273f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x273f34: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x273f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273f38: 0xac450064  sw          $a1, 0x64($v0)
    ctx->pc = 0x273f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
    // 0x273f3c: 0x8f83aa80  lw          $v1, -0x5580($gp)
    ctx->pc = 0x273f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x273f40: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x273f40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x273f44: 0x28424001  slti        $v0, $v0, 0x4001
    ctx->pc = 0x273f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16385) ? 1 : 0);
    // 0x273f48: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x273F48u;
    {
        const bool branch_taken_0x273f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F48u;
        // 0x273f4c: 0x8f91aa78  lw          $s1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f48) {
            ctx->pc = 0x273F70u;
            goto label_273f70;
        }
    }
    ctx->pc = 0x273F50u;
    // 0x273f50: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x273f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x273f54: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x273f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x273f58: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x273F58u;
    {
        const bool branch_taken_0x273f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273f58) {
            ctx->pc = 0x273F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273F58u;
            // 0x273f5c: 0x2a420b87  slti        $v0, $s2, 0xB87 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2951) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x273F74u;
            goto label_273f74;
        }
    }
    ctx->pc = 0x273F60u;
    // 0x273f60: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x273f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x273f64: 0x1000ffbe  b           . + 4 + (-0x42 << 2)
    ctx->pc = 0x273F64u;
    {
        const bool branch_taken_0x273f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F64u;
        // 0x273f68: 0xa6220006  sh          $v0, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f64) {
            ctx->pc = 0x273E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273e60;
        }
    }
    ctx->pc = 0x273F6Cu;
    // 0x273f6c: 0x0  nop
    ctx->pc = 0x273f6cu;
    // NOP
label_273f70:
    // 0x273f70: 0x2a420b87  slti        $v0, $s2, 0xB87
    ctx->pc = 0x273f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2951) ? 1 : 0);
label_273f74:
    // 0x273f74: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x273F74u;
    {
        const bool branch_taken_0x273f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273f74) {
            ctx->pc = 0x273F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273F74u;
            // 0x273f78: 0x8e220298  lw          $v0, 0x298($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273F88u;
            goto label_273f88;
        }
    }
    ctx->pc = 0x273F7Cu;
    // 0x273f7c: 0x1000ffb8  b           . + 4 + (-0x48 << 2)
    ctx->pc = 0x273F7Cu;
    {
        const bool branch_taken_0x273f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F7Cu;
        // 0x273f80: 0xa6200006  sh          $zero, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f7c) {
            ctx->pc = 0x273E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273e60;
        }
    }
    ctx->pc = 0x273F84u;
    // 0x273f84: 0x0  nop
    ctx->pc = 0x273f84u;
    // NOP
label_273f88:
    // 0x273f88: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x273f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x273f8c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x273F8Cu;
    {
        const bool branch_taken_0x273f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273f8c) {
            ctx->pc = 0x273FD0u;
            goto label_273fd0;
        }
    }
    ctx->pc = 0x273F94u;
    // 0x273f94: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x273f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x273f98: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x273f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x273f9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x273F9Cu;
    {
        const bool branch_taken_0x273f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273f9c) {
            ctx->pc = 0x273FD0u;
            goto label_273fd0;
        }
    }
    ctx->pc = 0x273FA4u;
    // 0x273fa4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x273fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x273fa8: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x273FA8u;
    SET_GPR_U32(ctx, 31, 0x273FB0u);
    ctx->pc = 0x273FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273FA8u;
    // 0x273fac: 0x2484be18  addiu       $a0, $a0, -0x41E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x273FA8u, 0x273FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273FB0u;
label_273fb0:
    // 0x273fb0: 0x1840008a  blez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x273FB0u;
    {
        const bool branch_taken_0x273fb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x273FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FB0u;
        // 0x273fb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fb0) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x273FB8u;
    // 0x273fb8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x273fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x273fbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x273fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273fc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x273fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273fc4: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x273FC4u;
    {
        const bool branch_taken_0x273fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FC4u;
        // 0x273fc8: 0xac62008c  sw          $v0, 0x8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fc4) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x273FCCu;
    // 0x273fcc: 0x0  nop
    ctx->pc = 0x273fccu;
    // NOP
label_273fd0:
    // 0x273fd0: 0x2784aa98  addiu       $a0, $gp, -0x5568
    ctx->pc = 0x273fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945432));
    // 0x273fd4: 0xc0997d8  jal         func_265F60
    ctx->pc = 0x273FD4u;
    SET_GPR_U32(ctx, 31, 0x273FDCu);
    ctx->pc = 0x265F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F60u, 0x273FD4u, 0x273FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273FDCu;
label_273fdc:
    // 0x273fdc: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x273FDCu;
    {
        const bool branch_taken_0x273fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FDCu;
        // 0x273fe0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fdc) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x273FE4u;
    // 0x273fe4: 0x0  nop
    ctx->pc = 0x273fe4u;
    // NOP
label_273fe8:
    // 0x273fe8: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x273fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x273fec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x273fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x273ff0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x273ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x273ff4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x273FF4u;
    {
        const bool branch_taken_0x273ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FF4u;
        // 0x273ff8: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ff4) {
            ctx->pc = 0x27404Cu;
            goto label_27404c;
        }
    }
    ctx->pc = 0x273FFCu;
    // 0x273ffc: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x273FFCu;
    SET_GPR_U32(ctx, 31, 0x274004u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x273FFCu, 0x274004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274004u;
label_274004:
    // 0x274004: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x274004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x274008: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x274008u;
    {
        const bool branch_taken_0x274008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274008u;
        // 0x27400c: 0x8f91aa78  lw          $s1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274008) {
            ctx->pc = 0x274048u;
            goto label_274048;
        }
    }
    ctx->pc = 0x274010u;
    // 0x274010: 0x8e220298  lw          $v0, 0x298($s1)
    ctx->pc = 0x274010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x274014: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x274014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x274018: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x274018u;
    {
        const bool branch_taken_0x274018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274018u;
        // 0x27401c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274018) {
            ctx->pc = 0x27404Cu;
            goto label_27404c;
        }
    }
    ctx->pc = 0x274020u;
    // 0x274020: 0x8f83aa80  lw          $v1, -0x5580($gp)
    ctx->pc = 0x274020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x274024: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x274024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x274028: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x274028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x27402c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27402Cu;
    {
        const bool branch_taken_0x27402c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27402Cu;
        // 0x274030: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27402c) {
            ctx->pc = 0x274038u;
            goto label_274038;
        }
    }
    ctx->pc = 0x274034u;
    // 0x274034: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x274034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_274038:
    // 0x274038: 0xc09d14c  jal         func_274530
    ctx->pc = 0x274038u;
    SET_GPR_U32(ctx, 31, 0x274040u);
    ctx->pc = 0x27403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274038u;
    // 0x27403c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274530u, 0x274038u, 0x274040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274040u;
label_274040:
    // 0x274040: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x274040u;
    {
        const bool branch_taken_0x274040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274040u;
        // 0x274044: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274040) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x274048u;
label_274048:
    // 0x274048: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x274048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_27404c:
    // 0x27404c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27404cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274050: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x274050u;
    {
        const bool branch_taken_0x274050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274050u;
        // 0x274054: 0xa6220006  sh          $v0, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274050) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x274058u;
label_274058:
    // 0x274058: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x274058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x27405c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x27405cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x274060: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x274060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x274064: 0x2a460b87  slti        $a2, $s2, 0xB87
    ctx->pc = 0x274064u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2951) ? 1 : 0);
    // 0x274068: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x274068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x27406c: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x27406cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x274070: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x274070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274074: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x274074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x274078: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x274078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x27407c: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x27407Cu;
    {
        const bool branch_taken_0x27407c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x274080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27407Cu;
        // 0x274080: 0xac450064  sw          $a1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27407c) {
            ctx->pc = 0x274090u;
            goto label_274090;
        }
    }
    ctx->pc = 0x274084u;
    // 0x274084: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x274084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274088: 0x1000ff75  b           . + 4 + (-0x8B << 2)
    ctx->pc = 0x274088u;
    {
        const bool branch_taken_0x274088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274088u;
        // 0x27408c: 0xa4400006  sh          $zero, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274088) {
            ctx->pc = 0x273E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273e60;
        }
    }
    ctx->pc = 0x274090u;
label_274090:
    // 0x274090: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x274090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274094: 0x8c640298  lw          $a0, 0x298($v1)
    ctx->pc = 0x274094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 664)));
    // 0x274098: 0x2882001d  slti        $v0, $a0, 0x1D
    ctx->pc = 0x274098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x27409c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27409Cu;
    {
        const bool branch_taken_0x27409c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2740A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27409Cu;
        // 0x2740a0: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27409c) {
            ctx->pc = 0x2740B8u;
            goto label_2740b8;
        }
    }
    ctx->pc = 0x2740A4u;
    // 0x2740a4: 0x5840ff6e  blezl       $v0, . + 4 + (-0x92 << 2)
    ctx->pc = 0x2740A4u;
    {
        const bool branch_taken_0x2740a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2740a4) {
            ctx->pc = 0x2740A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2740A4u;
            // 0x2740a8: 0xa4600006  sh          $zero, 0x6($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273e60;
        }
    }
    ctx->pc = 0x2740ACu;
    // 0x2740ac: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x2740acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x2740b0: 0x1000ff6b  b           . + 4 + (-0x95 << 2)
    ctx->pc = 0x2740B0u;
    {
        const bool branch_taken_0x2740b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2740B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740B0u;
        // 0x2740b4: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740b0) {
            ctx->pc = 0x273E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273e60;
        }
    }
    ctx->pc = 0x2740B8u;
label_2740b8:
    // 0x2740b8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2740b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2740bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2740BCu;
    {
        const bool branch_taken_0x2740bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2740bc) {
            ctx->pc = 0x2740D0u;
            goto label_2740d0;
        }
    }
    ctx->pc = 0x2740C4u;
    // 0x2740c4: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x2740c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2740c8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2740C8u;
    {
        const bool branch_taken_0x2740c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2740c8) {
            ctx->pc = 0x2740CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2740C8u;
            // 0x2740cc: 0x24023000  addiu       $v0, $zero, 0x3000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2740E8u;
            goto label_2740e8;
        }
    }
    ctx->pc = 0x2740D0u;
label_2740d0:
    // 0x2740d0: 0x2784aa98  addiu       $a0, $gp, -0x5568
    ctx->pc = 0x2740d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945432));
    // 0x2740d4: 0xc0997d8  jal         func_265F60
    ctx->pc = 0x2740D4u;
    SET_GPR_U32(ctx, 31, 0x2740DCu);
    ctx->pc = 0x265F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F60u, 0x2740D4u, 0x2740DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2740DCu;
label_2740dc:
    // 0x2740dc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2740DCu;
    {
        const bool branch_taken_0x2740dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2740E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740DCu;
        // 0x2740e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740dc) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x2740E4u;
    // 0x2740e4: 0x0  nop
    ctx->pc = 0x2740e4u;
    // NOP
label_2740e8:
    // 0x2740e8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2740e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2740ec: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2740ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2740f0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2740f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2740f4: 0x1000ff5a  b           . + 4 + (-0xA6 << 2)
    ctx->pc = 0x2740F4u;
    {
        const bool branch_taken_0x2740f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2740F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740F4u;
        // 0x2740f8: 0xac640064  sw          $a0, 0x64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740f4) {
            ctx->pc = 0x273E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273e60;
        }
    }
    ctx->pc = 0x2740FCu;
    // 0x2740fc: 0x0  nop
    ctx->pc = 0x2740fcu;
    // NOP
label_274100:
    // 0x274100: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x274100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x274104: 0x8443003e  lh          $v1, 0x3E($v0)
    ctx->pc = 0x274104u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x274108: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x274108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27410c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x27410cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x274110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274114: 0x8c4227b0  lw          $v0, 0x27B0($v0)
    ctx->pc = 0x274114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10160)));
    // 0x274118: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x274118u;
    {
        const bool branch_taken_0x274118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274118) {
            ctx->pc = 0x27411Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274118u;
            // 0x27411c: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274130u;
            goto label_274130;
        }
    }
    ctx->pc = 0x274120u;
    // 0x274120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274124: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x274124u;
    {
        const bool branch_taken_0x274124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274124u;
        // 0x274128: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274124) {
            ctx->pc = 0x2741D8u;
            goto label_2741d8;
        }
    }
    ctx->pc = 0x27412Cu;
    // 0x27412c: 0x0  nop
    ctx->pc = 0x27412cu;
    // NOP
label_274130:
    // 0x274130: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x274130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x274134: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x274134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x274138: 0x2a460b87  slti        $a2, $s2, 0xB87
    ctx->pc = 0x274138u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2951) ? 1 : 0);
    // 0x27413c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x27413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274140: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x274140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x274144: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x274144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274148: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x274148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x27414c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x27414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274150: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x274150u;
    {
        const bool branch_taken_0x274150 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x274154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274150u;
        // 0x274154: 0xac450064  sw          $a1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274150) {
            ctx->pc = 0x274168u;
            goto label_274168;
        }
    }
    ctx->pc = 0x274158u;
    // 0x274158: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x274158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x27415c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27415cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274160: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x274160u;
    {
        const bool branch_taken_0x274160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274160u;
        // 0x274164: 0xa4400006  sh          $zero, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274160) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x274168u;
label_274168:
    // 0x274168: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x274168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x27416c: 0x8c640298  lw          $a0, 0x298($v1)
    ctx->pc = 0x27416cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 664)));
    // 0x274170: 0x2882001d  slti        $v0, $a0, 0x1D
    ctx->pc = 0x274170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x274174: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274174u;
    {
        const bool branch_taken_0x274174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274174u;
        // 0x274178: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274174) {
            ctx->pc = 0x274190u;
            goto label_274190;
        }
    }
    ctx->pc = 0x27417Cu;
    // 0x27417c: 0x5840ff38  blezl       $v0, . + 4 + (-0xC8 << 2)
    ctx->pc = 0x27417Cu;
    {
        const bool branch_taken_0x27417c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27417c) {
            ctx->pc = 0x274180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27417Cu;
            // 0x274180: 0xa4600006  sh          $zero, 0x6($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273e60;
        }
    }
    ctx->pc = 0x274184u;
    // 0x274184: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x274184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x274188: 0x1000ff35  b           . + 4 + (-0xCB << 2)
    ctx->pc = 0x274188u;
    {
        const bool branch_taken_0x274188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274188u;
        // 0x27418c: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274188) {
            ctx->pc = 0x273E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273e60;
        }
    }
    ctx->pc = 0x274190u;
label_274190:
    // 0x274190: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x274190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x274194: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x274194u;
    {
        const bool branch_taken_0x274194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274194) {
            ctx->pc = 0x274198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274194u;
            // 0x274198: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2741C0u;
            goto label_2741c0;
        }
    }
    ctx->pc = 0x27419Cu;
    // 0x27419c: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x27419cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2741a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2741A0u;
    {
        const bool branch_taken_0x2741a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2741a0) {
            ctx->pc = 0x2741A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2741A0u;
            // 0x2741a4: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2741C0u;
            goto label_2741c0;
        }
    }
    ctx->pc = 0x2741A8u;
    // 0x2741a8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2741a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2741ac: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x2741ACu;
    SET_GPR_U32(ctx, 31, 0x2741B4u);
    ctx->pc = 0x2741B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2741ACu;
    // 0x2741b0: 0x2484c808  addiu       $a0, $a0, -0x37F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x2741ACu, 0x2741B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2741B4u;
label_2741b4:
    // 0x2741b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2741B4u;
    {
        const bool branch_taken_0x2741b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2741b4) {
            ctx->pc = 0x2741C8u;
            goto label_2741c8;
        }
    }
    ctx->pc = 0x2741BCu;
    // 0x2741bc: 0x0  nop
    ctx->pc = 0x2741bcu;
    // NOP
label_2741c0:
    // 0x2741c0: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x2741C0u;
    SET_GPR_U32(ctx, 31, 0x2741C8u);
    ctx->pc = 0x2741C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2741C0u;
    // 0x2741c4: 0x2484c7d8  addiu       $a0, $a0, -0x3828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x2741C0u, 0x2741C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2741C8u;
label_2741c8:
    // 0x2741c8: 0xc09b492  jal         func_26D248
    ctx->pc = 0x2741C8u;
    SET_GPR_U32(ctx, 31, 0x2741D0u);
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x2741C8u, 0x2741D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2741D0u;
label_2741d0:
    // 0x2741d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2741D0u;
    {
        const bool branch_taken_0x2741d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2741D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741D0u;
        // 0x2741d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741d0) {
            ctx->pc = 0x2741DCu;
            goto label_2741dc;
        }
    }
    ctx->pc = 0x2741D8u;
label_2741d8:
    // 0x2741d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2741d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2741dc:
    // 0x2741dc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2741DCu;
    {
        const bool branch_taken_0x2741dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2741E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741DCu;
        // 0x2741e0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741dc) {
            ctx->pc = 0x2742D0u;
            goto label_2742d0;
        }
    }
    ctx->pc = 0x2741E4u;
    // 0x2741e4: 0x0  nop
    ctx->pc = 0x2741e4u;
    // NOP
label_2741e8:
    // 0x2741e8: 0xc09d14c  jal         func_274530
    ctx->pc = 0x2741E8u;
    SET_GPR_U32(ctx, 31, 0x2741F0u);
    ctx->pc = 0x2741ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2741E8u;
    // 0x2741ec: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274530u, 0x2741E8u, 0x2741F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2741F0u;
label_2741f0:
    // 0x2741f0: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x2741f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2741f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2741f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2741f8: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x2741f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2741fc: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x2741fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x274200: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x274200u;
    {
        const bool branch_taken_0x274200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274200u;
        // 0x274204: 0xac83008c  sw          $v1, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274200) {
            ctx->pc = 0x2742D0u;
            goto label_2742d0;
        }
    }
    ctx->pc = 0x274208u;
label_274208:
    // 0x274208: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x27420c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27420Cu;
    {
        const bool branch_taken_0x27420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27420Cu;
        // 0x274210: 0x2484c808  addiu       $a0, $a0, -0x37F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27420c) {
            ctx->pc = 0x274220u;
            goto label_274220;
        }
    }
    ctx->pc = 0x274214u;
    // 0x274214: 0x0  nop
    ctx->pc = 0x274214u;
    // NOP
label_274218:
    // 0x274218: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x27421c: 0x2484c810  addiu       $a0, $a0, -0x37F0
    ctx->pc = 0x27421cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952976));
label_274220:
    // 0x274220: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x274220u;
    SET_GPR_U32(ctx, 31, 0x274228u);
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x274220u, 0x274228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274228u;
label_274228:
    // 0x274228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x274228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27422c:
    // 0x27422c: 0x5e000016  bgtzl       $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27422Cu;
    {
        const bool branch_taken_0x27422c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x27422c) {
            ctx->pc = 0x274230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27422Cu;
            // 0x274230: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274288u;
            goto label_274288;
        }
    }
    ctx->pc = 0x274234u;
    // 0x274234: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x274234u;
    {
        const bool branch_taken_0x274234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274234) {
            ctx->pc = 0x274288u;
            goto label_274288;
        }
    }
    ctx->pc = 0x27423Cu;
    // 0x27423c: 0x0  nop
    ctx->pc = 0x27423cu;
    // NOP
label_274240:
    // 0x274240: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x274240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x274244: 0x8462003e  lh          $v0, 0x3E($v1)
    ctx->pc = 0x274244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x274248: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x274248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27424c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x27424cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x274250: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x274250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x274254: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x274254u;
    {
        const bool branch_taken_0x274254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274254u;
        // 0x274258: 0x8c8427b4  lw          $a0, 0x27B4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274254) {
            ctx->pc = 0x274278u;
            goto label_274278;
        }
    }
    ctx->pc = 0x27425Cu;
    // 0x27425c: 0x0  nop
    ctx->pc = 0x27425cu;
    // NOP
label_274260:
    // 0x274260: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x274260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x274264: 0x8462003e  lh          $v0, 0x3E($v1)
    ctx->pc = 0x274264u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x274268: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x274268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27426c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x27426cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x274270: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x274270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x274274: 0x8c8427b8  lw          $a0, 0x27B8($a0)
    ctx->pc = 0x274274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10168)));
label_274278:
    // 0x274278: 0xc0997d8  jal         func_265F60
    ctx->pc = 0x274278u;
    SET_GPR_U32(ctx, 31, 0x274280u);
    ctx->pc = 0x265F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F60u, 0x274278u, 0x274280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274280u;
label_274280:
    // 0x274280: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x274280u;
    {
        const bool branch_taken_0x274280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274280u;
        // 0x274284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274280) {
            ctx->pc = 0x2742D0u;
            goto label_2742d0;
        }
    }
    ctx->pc = 0x274288u;
label_274288:
    // 0x274288: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x274288u;
    {
        const bool branch_taken_0x274288 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274288u;
        // 0x27428c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274288) {
            ctx->pc = 0x2742D0u;
            goto label_2742d0;
        }
    }
    ctx->pc = 0x274290u;
    // 0x274290: 0x1a000010  blez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x274290u;
    {
        const bool branch_taken_0x274290 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x274294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274290u;
        // 0x274294: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274290) {
            ctx->pc = 0x2742D4u;
            goto label_2742d4;
        }
    }
    ctx->pc = 0x274298u;
    // 0x274298: 0xc09b492  jal         func_26D248
    ctx->pc = 0x274298u;
    SET_GPR_U32(ctx, 31, 0x2742A0u);
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x274298u, 0x2742A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2742A0u;
label_2742a0:
    // 0x2742a0: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2742A0u;
    {
        const bool branch_taken_0x2742a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2742A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742A0u;
        // 0x2742a4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2742a0) {
            ctx->pc = 0x2742CCu;
            goto label_2742cc;
        }
    }
    ctx->pc = 0x2742A8u;
    // 0x2742a8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2742a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2742ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2742acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2742b0: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x2742b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x2742b4: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2742b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2742b8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x2742b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x2742bc: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2742bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2742c0: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x2742c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x2742c4: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2742c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2742c8: 0xac450064  sw          $a1, 0x64($v0)
    ctx->pc = 0x2742c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
label_2742cc:
    // 0x2742cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2742ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2742d0:
    // 0x2742d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2742d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2742d4:
    // 0x2742d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2742d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2742d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2742d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2742dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2742dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2742e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2742E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2742E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742E0u;
        // 0x2742e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2742E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2742E8u;
}
