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

// Function: sub_00361EF0
// Address: 0x361ef0 - 0x361fa8
void sub_00361EF0_0x361ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361EF0_0x361ef0");
#endif

    switch (ctx->pc) {
        case 0x361f1cu: goto label_361f1c;
        case 0x361f38u: goto label_361f38;
        case 0x361f54u: goto label_361f54;
        case 0x361f70u: goto label_361f70;
        case 0x361f88u: goto label_361f88;
        default: break;
    }

    ctx->pc = 0x361ef0u;

    // 0x361ef0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x361ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x361ef4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x361ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x361ef8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x361ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x361efc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x361efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f00: 0x2e030030  sltiu       $v1, $s0, 0x30
    ctx->pc = 0x361f00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x361f04: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x361f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x361f08: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x361f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x361f0c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x361F0Cu;
    {
        const bool branch_taken_0x361f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x361F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361F0Cu;
        // 0x361f10: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361f0c) {
            ctx->pc = 0x361F58u;
            goto label_361f58;
        }
    }
    ctx->pc = 0x361F14u;
    // 0x361f14: 0xc0d8f00  jal         func_363C00
    ctx->pc = 0x361F14u;
    SET_GPR_U32(ctx, 31, 0x361F1Cu);
    ctx->pc = 0x363C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363C00u, 0x361F14u, 0x361F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361F1Cu;
label_361f1c:
    // 0x361f1c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x361f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x361f20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x361f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x361f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f28: 0x1223000b  beq         $s1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x361F28u;
    {
        const bool branch_taken_0x361f28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x361F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361F28u;
        // 0x361f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361f28) {
            ctx->pc = 0x361F58u;
            goto label_361f58;
        }
    }
    ctx->pc = 0x361F30u;
    // 0x361f30: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x361F30u;
    SET_GPR_U32(ctx, 31, 0x361F38u);
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x361F30u, 0x361F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361F38u;
label_361f38:
    // 0x361f38: 0x3222001f  andi        $v0, $s1, 0x1F
    ctx->pc = 0x361f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x361f3c: 0x97a60032  lhu         $a2, 0x32($sp)
    ctx->pc = 0x361f3cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
    // 0x361f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f44: 0x97a50030  lhu         $a1, 0x30($sp)
    ctx->pc = 0x361f44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361f48: 0x30c6ffc0  andi        $a2, $a2, 0xFFC0
    ctx->pc = 0x361f48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65472);
    // 0x361f4c: 0xc0d73bc  jal         func_35CEF0
    ctx->pc = 0x361F4Cu;
    SET_GPR_U32(ctx, 31, 0x361F54u);
    ctx->pc = 0x361F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361F4Cu;
    // 0x361f50: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CEF0u, 0x361F4Cu, 0x361F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361F54u;
label_361f54:
    // 0x361f54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_361f58:
    // 0x361f58: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x361f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x361f5c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x361f5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x361f60: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x361f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x361f64: 0x3e00008  jr          $ra
    ctx->pc = 0x361F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361F64u;
        // 0x361f68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361F6Cu;
    // 0x361f6c: 0x0  nop
    ctx->pc = 0x361f6cu;
    // NOP
label_361f70:
    // 0x361f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x361f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x361f74: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x361F74u;
    {
        const bool branch_taken_0x361f74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x361F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361F74u;
        // 0x361f78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361f74) {
            ctx->pc = 0x361F98u;
            goto label_361f98;
        }
    }
    ctx->pc = 0x361F7Cu;
    // 0x361f7c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x361f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x361f80: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x361F80u;
    SET_GPR_U32(ctx, 31, 0x361F88u);
    ctx->pc = 0x361F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361F80u;
    // 0x361f84: 0x248470b0  addiu       $a0, $a0, 0x70B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x361F80u, 0x361F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361F88u;
label_361f88:
    // 0x361f88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x361f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x361f8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x361F8Cu;
    {
        const bool branch_taken_0x361f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361F8Cu;
        // 0x361f90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361f8c) {
            ctx->pc = 0x361FA0u;
            goto label_361fa0;
        }
    }
    ctx->pc = 0x361F94u;
    // 0x361f94: 0x0  nop
    ctx->pc = 0x361f94u;
    // NOP
label_361f98:
    // 0x361f98: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x361f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361f9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x361f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_361fa0:
    // 0x361fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x361FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361FA0u;
        // 0x361fa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361FA8u;
}
