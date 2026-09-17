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

// Function: sub_0035DDA8
// Address: 0x35dda8 - 0x35dea8
void sub_0035DDA8_0x35dda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DDA8_0x35dda8");
#endif

    switch (ctx->pc) {
        case 0x35ddb0u: goto label_35ddb0;
        case 0x35dde8u: goto label_35dde8;
        case 0x35de00u: goto label_35de00;
        case 0x35de20u: goto label_35de20;
        case 0x35de8cu: goto label_35de8c;
        default: break;
    }

    ctx->pc = 0x35dda8u;

    // 0x35dda8: 0x3e00008  jr          $ra
    ctx->pc = 0x35DDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DDA8u;
        // 0x35ddac: 0xdf82c7d0  ld          $v0, -0x3830($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294952912)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DDB0u;
label_35ddb0:
    // 0x35ddb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ddb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35ddb4: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x35ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x35ddb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ddb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ddbc: 0x48603  sra         $s0, $a0, 24
    ctx->pc = 0x35ddbcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 24));
    // 0x35ddc0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x35ddc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x35ddc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35ddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35ddc8: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x35ddc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x35ddcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35ddccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35ddd0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35DDD0u;
    {
        const bool branch_taken_0x35ddd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DDD0u;
        // 0x35ddd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ddd0) {
            ctx->pc = 0x35DDF8u;
            goto label_35ddf8;
        }
    }
    ctx->pc = 0x35DDD8u;
    // 0x35ddd8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35dddc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35dddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dde0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35DDE0u;
    SET_GPR_U32(ctx, 31, 0x35DDE8u);
    ctx->pc = 0x35DDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DDE0u;
    // 0x35dde4: 0x24845ca0  addiu       $a0, $a0, 0x5CA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35DDE0u, 0x35DDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DDE8u;
label_35dde8:
    // 0x35dde8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35ddec: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x35DDECu;
    {
        const bool branch_taken_0x35ddec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DDECu;
        // 0x35ddf0: 0x34420019  ori         $v0, $v0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ddec) {
            ctx->pc = 0x35DE90u;
            goto label_35de90;
        }
    }
    ctx->pc = 0x35DDF4u;
    // 0x35ddf4: 0x0  nop
    ctx->pc = 0x35ddf4u;
    // NOP
label_35ddf8:
    // 0x35ddf8: 0xc0d77aa  jal         func_35DEA8
    ctx->pc = 0x35DDF8u;
    SET_GPR_U32(ctx, 31, 0x35DE00u);
    ctx->pc = 0x35DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DDF8u;
    // 0x35ddfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DEA8u, 0x35DDF8u, 0x35DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DE00u;
label_35de00:
    // 0x35de00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35de00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35de04: 0x4c00022  bltz        $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x35DE04u;
    {
        const bool branch_taken_0x35de04 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x35DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE04u;
        // 0x35de08: 0xdf88c7d0  ld          $t0, -0x3830($gp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 28), 4294952912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35de04) {
            ctx->pc = 0x35DE90u;
            goto label_35de90;
        }
    }
    ctx->pc = 0x35DE0Cu;
    // 0x35de0c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35de10: 0x24451378  addiu       $a1, $v0, 0x1378
    ctx->pc = 0x35de10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4984));
    // 0x35de14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35de14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35de18: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x35de18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35de1c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x35de1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35de20:
    // 0x35de20: 0x881017  dsrav       $v0, $t0, $a0
    ctx->pc = 0x35de20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 8) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x35de24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35de24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35de28: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x35de28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x35de2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35de2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35de30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35de30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35de34: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35DE34u;
    {
        const bool branch_taken_0x35de34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE34u;
        // 0x35de38: 0x28870030  slti        $a3, $a0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35de34) {
            ctx->pc = 0x35DE68u;
            goto label_35de68;
        }
    }
    ctx->pc = 0x35DE3Cu;
    // 0x35de3c: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x35de3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x35de40: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35DE40u;
    {
        const bool branch_taken_0x35de40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x35de40) {
            ctx->pc = 0x35DE68u;
            goto label_35de68;
        }
    }
    ctx->pc = 0x35DE48u;
    // 0x35de48: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x35de48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x35de4c: 0x246200ff  addiu       $v0, $v1, 0xFF
    ctx->pc = 0x35de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x35de50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35de50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35de54: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x35de54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35de58: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x35DE58u;
    {
        const bool branch_taken_0x35de58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35de58) {
            ctx->pc = 0x35DE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DE58u;
            // 0x35de5c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DE68u;
            goto label_35de68;
        }
    }
    ctx->pc = 0x35DE60u;
    // 0x35de60: 0x50690001  beql        $v1, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x35DE60u;
    {
        const bool branch_taken_0x35de60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x35de60) {
            ctx->pc = 0x35DE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DE60u;
            // 0x35de64: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DE68u;
            goto label_35de68;
        }
    }
    ctx->pc = 0x35DE68u;
label_35de68:
    // 0x35de68: 0x14e0ffed  bnez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x35DE68u;
    {
        const bool branch_taken_0x35de68 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE68u;
        // 0x35de6c: 0x24a5006c  addiu       $a1, $a1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35de68) {
            ctx->pc = 0x35DE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35de20;
        }
    }
    ctx->pc = 0x35DE70u;
    // 0x35de70: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x35de70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x35de74: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x35DE74u;
    {
        const bool branch_taken_0x35de74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35de74) {
            ctx->pc = 0x35DE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DE74u;
            // 0x35de78: 0xd11023  subu        $v0, $a2, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DE90u;
            goto label_35de90;
        }
    }
    ctx->pc = 0x35DE7Cu;
    // 0x35de7c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35de7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35de80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35de80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35de84: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35DE84u;
    SET_GPR_U32(ctx, 31, 0x35DE8Cu);
    ctx->pc = 0x35DE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DE84u;
    // 0x35de88: 0x24845ce0  addiu       $a0, $a0, 0x5CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35DE84u, 0x35DE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DE8Cu;
label_35de8c:
    // 0x35de8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_35de90:
    // 0x35de90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35de90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35de94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35de94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35de98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35de98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35de9c: 0x3e00008  jr          $ra
    ctx->pc = 0x35DE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE9Cu;
        // 0x35dea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DEA4u;
    // 0x35dea4: 0x0  nop
    ctx->pc = 0x35dea4u;
    // NOP
    ctx->pc = 0x35dea8u;
}
