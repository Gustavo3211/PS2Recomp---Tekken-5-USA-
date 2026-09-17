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

// Function: sub_0026FF08
// Address: 0x26ff08 - 0x26fff0
void sub_0026FF08_0x26ff08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FF08_0x26ff08");
#endif

    switch (ctx->pc) {
        case 0x26ff24u: goto label_26ff24;
        case 0x26ff44u: goto label_26ff44;
        default: break;
    }

    ctx->pc = 0x26ff08u;

    // 0x26ff08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26ff08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26ff0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26ff0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26ff10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26ff10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26ff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26ff18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26ff18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26ff1c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26FF1Cu;
    SET_GPR_U32(ctx, 31, 0x26FF24u);
    ctx->pc = 0x26FF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF1Cu;
    // 0x26ff20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26FF1Cu, 0x26FF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF24u;
label_26ff24:
    // 0x26ff24: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26ff28: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26ff28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26ff2c: 0x84640380  lh          $a0, 0x380($v1)
    ctx->pc = 0x26ff2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x26ff30: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x26ff30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26ff34: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x26FF34u;
    {
        const bool branch_taken_0x26ff34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF34u;
        // 0x26ff38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff34) {
            ctx->pc = 0x26FFDCu;
            goto label_26ffdc;
        }
    }
    ctx->pc = 0x26FF3Cu;
    // 0x26ff3c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26FF3Cu;
    SET_GPR_U32(ctx, 31, 0x26FF44u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26FF3Cu, 0x26FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF44u;
label_26ff44:
    // 0x26ff44: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x26ff44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x26ff48: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x26FF48u;
    {
        const bool branch_taken_0x26ff48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF48u;
        // 0x26ff4c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff48) {
            ctx->pc = 0x26FFD8u;
            goto label_26ffd8;
        }
    }
    ctx->pc = 0x26FF50u;
    // 0x26ff50: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x26ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x26ff54: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x26ff54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26ff58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FF58u;
    {
        const bool branch_taken_0x26ff58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF58u;
        // 0x26ff5c: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff58) {
            ctx->pc = 0x26FF70u;
            goto label_26ff70;
        }
    }
    ctx->pc = 0x26FF60u;
    // 0x26ff60: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x26ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x26ff64: 0x443001c  bgezl       $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26FF64u;
    {
        const bool branch_taken_0x26ff64 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26ff64) {
            ctx->pc = 0x26FF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FF64u;
            // 0x26ff68: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FFD8u;
            goto label_26ffd8;
        }
    }
    ctx->pc = 0x26FF6Cu;
    // 0x26ff6c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x26ff6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_26ff70:
    // 0x26ff70: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x26FF70u;
    {
        const bool branch_taken_0x26ff70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ff70) {
            ctx->pc = 0x26FF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FF70u;
            // 0x26ff74: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FFD8u;
            goto label_26ffd8;
        }
    }
    ctx->pc = 0x26FF78u;
    // 0x26ff78: 0x8c62032c  lw          $v0, 0x32C($v1)
    ctx->pc = 0x26ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
    // 0x26ff7c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x26ff7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x26ff80: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26FF80u;
    {
        const bool branch_taken_0x26ff80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF80u;
        // 0x26ff84: 0x8f82aa80  lw          $v0, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff80) {
            ctx->pc = 0x26FFC0u;
            goto label_26ffc0;
        }
    }
    ctx->pc = 0x26FF88u;
    // 0x26ff88: 0x904301f9  lbu         $v1, 0x1F9($v0)
    ctx->pc = 0x26ff88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 505)));
    // 0x26ff8c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x26FF8Cu;
    {
        const bool branch_taken_0x26ff8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF8Cu;
        // 0x26ff90: 0x8f83aa7c  lw          $v1, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff8c) {
            ctx->pc = 0x26FFC4u;
            goto label_26ffc4;
        }
    }
    ctx->pc = 0x26FF94u;
    // 0x26ff94: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x26ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26ff98: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x26ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x26ff9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26ff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26ffa0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x26FFA0u;
    {
        const bool branch_taken_0x26ffa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ffa0) {
            ctx->pc = 0x26FFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FFA0u;
            // 0x26ffa4: 0x8f83aa7c  lw          $v1, -0x5584($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FFC4u;
            goto label_26ffc4;
        }
    }
    ctx->pc = 0x26FFA8u;
    // 0x26ffa8: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x26ffa8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26ffac: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x26ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x26ffb0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FFB0u;
    {
        const bool branch_taken_0x26ffb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFB0u;
        // 0x26ffb4: 0x2402061f  addiu       $v0, $zero, 0x61F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1567));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ffb0) {
            ctx->pc = 0x26FFC0u;
            goto label_26ffc0;
        }
    }
    ctx->pc = 0x26FFB8u;
    // 0x26ffb8: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26FFB8u;
    {
        const bool branch_taken_0x26ffb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26ffb8) {
            ctx->pc = 0x26FFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FFB8u;
            // 0x26ffbc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FFD8u;
            goto label_26ffd8;
        }
    }
    ctx->pc = 0x26FFC0u;
label_26ffc0:
    // 0x26ffc0: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x26ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
label_26ffc4:
    // 0x26ffc4: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x26ffc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x26ffc8: 0x28423801  slti        $v0, $v0, 0x3801
    ctx->pc = 0x26ffc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14337) ? 1 : 0);
    // 0x26ffcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FFCCu;
    {
        const bool branch_taken_0x26ffcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFCCu;
        // 0x26ffd0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ffcc) {
            ctx->pc = 0x26FFDCu;
            goto label_26ffdc;
        }
    }
    ctx->pc = 0x26FFD4u;
    // 0x26ffd4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x26ffd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ffd8:
    // 0x26ffd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26ffd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26ffdc:
    // 0x26ffdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26ffdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ffe0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26ffe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26ffe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26ffe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ffe8: 0x3e00008  jr          $ra
    ctx->pc = 0x26FFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFE8u;
        // 0x26ffec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FFF0u;
}
