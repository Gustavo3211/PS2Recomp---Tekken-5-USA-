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

// Function: sub_00274EE0
// Address: 0x274ee0 - 0x275190
void sub_00274EE0_0x274ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274EE0_0x274ee0");
#endif

    switch (ctx->pc) {
        case 0x274f14u: goto label_274f14;
        case 0x274f34u: goto label_274f34;
        case 0x274f84u: goto label_274f84;
        case 0x274fb4u: goto label_274fb4;
        case 0x274fe0u: goto label_274fe0;
        case 0x27504cu: goto label_27504c;
        case 0x2750acu: goto label_2750ac;
        default: break;
    }

    ctx->pc = 0x274ee0u;

    // 0x274ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274ee4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x274ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274ee8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x274ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x274eec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x274eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274ef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x274ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x274ef4: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x274ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x274ef8: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x274EF8u;
    {
        const bool branch_taken_0x274ef8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x274EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EF8u;
        // 0x274efc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ef8) {
            ctx->pc = 0x274FC4u;
            goto label_274fc4;
        }
    }
    ctx->pc = 0x274F00u;
    // 0x274f00: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x274f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x274f04: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x274F04u;
    {
        const bool branch_taken_0x274f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F04u;
        // 0x274f08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f04) {
            ctx->pc = 0x274FC8u;
            goto label_274fc8;
        }
    }
    ctx->pc = 0x274F0Cu;
    // 0x274f0c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x274F0Cu;
    SET_GPR_U32(ctx, 31, 0x274F14u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x274F0Cu, 0x274F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F14u;
label_274f14:
    // 0x274f14: 0x8f90aa78  lw          $s0, -0x5588($gp)
    ctx->pc = 0x274f14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274f18: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x274f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x274f1c: 0x86030374  lh          $v1, 0x374($s0)
    ctx->pc = 0x274f1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x274f20: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x274f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x274f24: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x274F24u;
    {
        const bool branch_taken_0x274f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F24u;
        // 0x274f28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f24) {
            ctx->pc = 0x274FC8u;
            goto label_274fc8;
        }
    }
    ctx->pc = 0x274F2Cu;
    // 0x274f2c: 0xc099130  jal         func_2644C0
    ctx->pc = 0x274F2Cu;
    SET_GPR_U32(ctx, 31, 0x274F34u);
    ctx->pc = 0x2644C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2644C0u, 0x274F2Cu, 0x274F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F34u;
label_274f34:
    // 0x274f34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x274f34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f38: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x274f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x274f3c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x274F3Cu;
    {
        const bool branch_taken_0x274f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F3Cu;
        // 0x274f40: 0x2862ffff  slti        $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f3c) {
            ctx->pc = 0x274FC0u;
            goto label_274fc0;
        }
    }
    ctx->pc = 0x274F44u;
    // 0x274f44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274F44u;
    {
        const bool branch_taken_0x274f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F44u;
        // 0x274f48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f44) {
            ctx->pc = 0x274F60u;
            goto label_274f60;
        }
    }
    ctx->pc = 0x274F4Cu;
    // 0x274f4c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x274f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x274f50: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274F50u;
    {
        const bool branch_taken_0x274f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F50u;
        // 0x274f54: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f50) {
            ctx->pc = 0x274F70u;
            goto label_274f70;
        }
    }
    ctx->pc = 0x274F58u;
    // 0x274f58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x274F58u;
    {
        const bool branch_taken_0x274f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274f58) {
            ctx->pc = 0x274F98u;
            goto label_274f98;
        }
    }
    ctx->pc = 0x274F60u;
label_274f60:
    // 0x274f60: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x274F60u;
    {
        const bool branch_taken_0x274f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F60u;
        // 0x274f64: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f60) {
            ctx->pc = 0x274FC4u;
            goto label_274fc4;
        }
    }
    ctx->pc = 0x274F68u;
    // 0x274f68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274F68u;
    {
        const bool branch_taken_0x274f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274f68) {
            ctx->pc = 0x274F98u;
            goto label_274f98;
        }
    }
    ctx->pc = 0x274F70u;
label_274f70:
    // 0x274f70: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x274f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x274f74: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x274F74u;
    {
        const bool branch_taken_0x274f74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x274F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F74u;
        // 0x274f78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f74) {
            ctx->pc = 0x274FC8u;
            goto label_274fc8;
        }
    }
    ctx->pc = 0x274F7Cu;
    // 0x274f7c: 0xc09b492  jal         func_26D248
    ctx->pc = 0x274F7Cu;
    SET_GPR_U32(ctx, 31, 0x274F84u);
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x274F7Cu, 0x274F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F84u;
label_274f84:
    // 0x274f84: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x274F84u;
    {
        const bool branch_taken_0x274f84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x274F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F84u;
        // 0x274f88: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f84) {
            ctx->pc = 0x274FC8u;
            goto label_274fc8;
        }
    }
    ctx->pc = 0x274F8Cu;
    // 0x274f8c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x274F8Cu;
    {
        const bool branch_taken_0x274f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F8Cu;
        // 0x274f90: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f8c) {
            ctx->pc = 0x274FC4u;
            goto label_274fc4;
        }
    }
    ctx->pc = 0x274F94u;
    // 0x274f94: 0x0  nop
    ctx->pc = 0x274f94u;
    // NOP
label_274f98:
    // 0x274f98: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274F98u;
    {
        const bool branch_taken_0x274f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F98u;
        // 0x274f9c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f98) {
            ctx->pc = 0x274FA8u;
            goto label_274fa8;
        }
    }
    ctx->pc = 0x274FA0u;
    // 0x274fa0: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274FA0u;
    {
        const bool branch_taken_0x274fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x274fa0) {
            ctx->pc = 0x274FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274FA0u;
            // 0x274fa4: 0xa6030006  sh          $v1, 0x6($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274FC0u;
            goto label_274fc0;
        }
    }
    ctx->pc = 0x274FA8u;
label_274fa8:
    // 0x274fa8: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x274fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x274fac: 0xc09935e  jal         func_264D78
    ctx->pc = 0x274FACu;
    SET_GPR_U32(ctx, 31, 0x274FB4u);
    ctx->pc = 0x274FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274FACu;
    // 0x274fb0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264D78u, 0x274FACu, 0x274FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274FB4u;
label_274fb4:
    // 0x274fb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274FB4u;
    {
        const bool branch_taken_0x274fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FB4u;
        // 0x274fb8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274fb4) {
            ctx->pc = 0x274FC4u;
            goto label_274fc4;
        }
    }
    ctx->pc = 0x274FBCu;
    // 0x274fbc: 0x0  nop
    ctx->pc = 0x274fbcu;
    // NOP
label_274fc0:
    // 0x274fc0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x274fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274fc4:
    // 0x274fc4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x274fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_274fc8:
    // 0x274fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x274fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274fcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x274fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x274fd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x274fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x274FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FD4u;
        // 0x274fd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274FDCu;
    // 0x274fdc: 0x0  nop
    ctx->pc = 0x274fdcu;
    // NOP
label_274fe0:
    // 0x274fe0: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x274fe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x274fe4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x274fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274fe8: 0x2ce40014  sltiu       $a0, $a3, 0x14
    ctx->pc = 0x274fe8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x274fec: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x274fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x274ff0: 0x28650002  slti        $a1, $v1, 0x2
    ctx->pc = 0x274ff0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x274ff4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x274ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274ff8: 0x44380a  movz        $a3, $v0, $a0
    ctx->pc = 0x274ff8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x274ffc: 0x2404048c  addiu       $a0, $zero, 0x48C
    ctx->pc = 0x274ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1164));
    // 0x275000: 0xc5180a  movz        $v1, $a2, $a1
    ctx->pc = 0x275000u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x275004: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x275004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x275008: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x275008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27500c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x27500cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x275010: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x275010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x275014: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x275014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x275018: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x275018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x27501c: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x27501cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x275020: 0x2421ee00  addiu       $at, $at, -0x1200
    ctx->pc = 0x275020u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962688));
    // 0x275024: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x275024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x275028: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x275028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x27502c: 0x248424f8  addiu       $a0, $a0, 0x24F8
    ctx->pc = 0x27502cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9464));
    // 0x275030: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x275030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x275034: 0x24650334  addiu       $a1, $v1, 0x334
    ctx->pc = 0x275034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 820));
    // 0x275038: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x275038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x27503c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x27503cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x275040: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x275040u;
    {
        const bool branch_taken_0x275040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275040u;
        // 0x275044: 0xaf83aa78  sw          $v1, -0x5588($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275040) {
            ctx->pc = 0x2750A8u;
            goto label_2750a8;
        }
    }
    ctx->pc = 0x275048u;
    // 0x275048: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x275048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_27504c:
    // 0x27504c: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x27504cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x275050: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x275050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x275054: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x275054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x275058: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x275058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x27505c: 0x68880017  ldl         $t0, 0x17($a0)
    ctx->pc = 0x27505cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x275060: 0x6c880010  ldr         $t0, 0x10($a0)
    ctx->pc = 0x275060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x275064: 0x6889001f  ldl         $t1, 0x1F($a0)
    ctx->pc = 0x275064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x275068: 0x6c890018  ldr         $t1, 0x18($a0)
    ctx->pc = 0x275068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x27506c: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x27506cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275070: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x275070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275074: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x275074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275078: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x275078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27507c: 0xb0a80017  sdl         $t0, 0x17($a1)
    ctx->pc = 0x27507cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275080: 0xb4a80010  sdr         $t0, 0x10($a1)
    ctx->pc = 0x275080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275084: 0xb0a9001f  sdl         $t1, 0x1F($a1)
    ctx->pc = 0x275084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275088: 0xb4a90018  sdr         $t1, 0x18($a1)
    ctx->pc = 0x275088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27508c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x27508cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x275090: 0x0  nop
    ctx->pc = 0x275090u;
    // NOP
    // 0x275094: 0x0  nop
    ctx->pc = 0x275094u;
    // NOP
    // 0x275098: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x275098u;
    {
        const bool branch_taken_0x275098 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x27509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275098u;
        // 0x27509c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275098) {
            ctx->pc = 0x27504Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27504c;
        }
    }
    ctx->pc = 0x2750A0u;
    // 0x2750a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2750A0u;
    {
        const bool branch_taken_0x2750a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2750A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750A0u;
        // 0x2750a4: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750a0) {
            ctx->pc = 0x2750E4u;
            goto label_2750e4;
        }
    }
    ctx->pc = 0x2750A8u;
label_2750a8:
    // 0x2750a8: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2750a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2750ac:
    // 0x2750ac: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2750acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2750b0: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x2750b0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2750b4: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x2750b4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2750b8: 0xdc890018  ld          $t1, 0x18($a0)
    ctx->pc = 0x2750b8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2750bc: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x2750bcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x2750c0: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x2750c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x2750c4: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x2750c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x2750c8: 0xfca90018  sd          $t1, 0x18($a1)
    ctx->pc = 0x2750c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 9));
    // 0x2750cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2750ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2750d0: 0x0  nop
    ctx->pc = 0x2750d0u;
    // NOP
    // 0x2750d4: 0x0  nop
    ctx->pc = 0x2750d4u;
    // NOP
    // 0x2750d8: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2750D8u;
    {
        const bool branch_taken_0x2750d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2750DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750D8u;
        // 0x2750dc: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750d8) {
            ctx->pc = 0x2750ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2750ac;
        }
    }
    ctx->pc = 0x2750E0u;
    // 0x2750e0: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2750e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_2750e4:
    // 0x2750e4: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x2750e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2750e8: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x2750e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2750ec: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x2750ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2750f0: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x2750f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2750f4: 0x68880017  ldl         $t0, 0x17($a0)
    ctx->pc = 0x2750f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2750f8: 0x6c880010  ldr         $t0, 0x10($a0)
    ctx->pc = 0x2750f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2750fc: 0x84890018  lh          $t1, 0x18($a0)
    ctx->pc = 0x2750fcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x275100: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x275100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275104: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x275104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275108: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x275108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27510c: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x27510cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275110: 0xb0a80017  sdl         $t0, 0x17($a1)
    ctx->pc = 0x275110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275114: 0xb4a80010  sdr         $t0, 0x10($a1)
    ctx->pc = 0x275114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275118: 0xa4a90018  sh          $t1, 0x18($a1)
    ctx->pc = 0x275118u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 9));
    // 0x27511c: 0xac4703d0  sw          $a3, 0x3D0($v0)
    ctx->pc = 0x27511cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 976), GPR_U32(ctx, 7));
    // 0x275120: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x275120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x275124: 0x94a3036c  lhu         $v1, 0x36C($a1)
    ctx->pc = 0x275124u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 876)));
    // 0x275128: 0x94a40370  lhu         $a0, 0x370($a1)
    ctx->pc = 0x275128u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x27512c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x27512cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x275130: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x275130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x275134: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x275134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x275138: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x275138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x27513c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x27513cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x275140: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x275140u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x275144: 0x3e00008  jr          $ra
    ctx->pc = 0x275144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275144u;
        // 0x275148: 0xaca30254  sw          $v1, 0x254($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 596), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27514Cu;
    // 0x27514c: 0x0  nop
    ctx->pc = 0x27514cu;
    // NOP
    // 0x275150: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x275150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x275154: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x275154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275158: 0x246588d0  addiu       $a1, $v1, -0x7730
    ctx->pc = 0x275158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x27515c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x27515cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x275160: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x275160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x275164: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x275164u;
    {
        const bool branch_taken_0x275164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x275164) {
            ctx->pc = 0x275168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275164u;
            // 0x275168: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27516Cu;
            goto label_27516c;
        }
    }
    ctx->pc = 0x27516Cu;
label_27516c:
    // 0x27516c: 0x9443003c  lhu         $v1, 0x3C($v0)
    ctx->pc = 0x27516cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x275170: 0x2402048c  addiu       $v0, $zero, 0x48C
    ctx->pc = 0x275170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1164));
    // 0x275174: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x275174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x275178: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x275178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x27517c: 0x2421ee00  addiu       $at, $at, -0x1200
    ctx->pc = 0x27517cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962688));
    // 0x275180: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x275180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x275184: 0xaf83aa78  sw          $v1, -0x5588($gp)
    ctx->pc = 0x275184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945400), GPR_U32(ctx, 3));
    // 0x275188: 0x3e00008  jr          $ra
    ctx->pc = 0x275188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275188u;
        // 0x27518c: 0x8c6203d0  lw          $v0, 0x3D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 976)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275190u;
}
