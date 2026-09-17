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

// Function: sub_00117F40
// Address: 0x117f40 - 0x117fd0
void sub_00117F40_0x117f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117F40_0x117f40");
#endif

    switch (ctx->pc) {
        case 0x117f58u: goto label_117f58;
        case 0x117f68u: goto label_117f68;
        case 0x117facu: goto label_117fac;
        default: break;
    }

    ctx->pc = 0x117f40u;

    // 0x117f40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117f44: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x117f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x117f48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x117f4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x117f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117f50: 0xc045e5a  jal         func_117968
    ctx->pc = 0x117F50u;
    SET_GPR_U32(ctx, 31, 0x117F58u);
    ctx->pc = 0x117F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117F50u;
    // 0x117f54: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117968u, 0x117F50u, 0x117F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F58u;
label_117f58:
    // 0x117f58: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x117F58u;
    {
        const bool branch_taken_0x117f58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x117F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F58u;
        // 0x117f5c: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f58) {
            ctx->pc = 0x117FBCu;
            goto label_117fbc;
        }
    }
    ctx->pc = 0x117F60u;
    // 0x117f60: 0xc045e9a  jal         func_117A68
    ctx->pc = 0x117F60u;
    SET_GPR_U32(ctx, 31, 0x117F68u);
    ctx->pc = 0x117A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A68u, 0x117F60u, 0x117F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F68u;
label_117f68:
    // 0x117f68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117F68u;
    {
        const bool branch_taken_0x117f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F68u;
        // 0x117f6c: 0x3c10001f  lui         $s0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f68) {
            ctx->pc = 0x117F7Cu;
            goto label_117f7c;
        }
    }
    ctx->pc = 0x117F70u;
    // 0x117f70: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x117f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x117f74: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x117F74u;
    {
        const bool branch_taken_0x117f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F74u;
        // 0x117f78: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f74) {
            ctx->pc = 0x117FBCu;
            goto label_117fbc;
        }
    }
    ctx->pc = 0x117F7Cu;
label_117f7c:
    // 0x117f7c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x117f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x117f80: 0x2607bd00  addiu       $a3, $s0, -0x4300
    ctx->pc = 0x117f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950144));
    // 0x117f84: 0xae11bd00  sw          $s1, -0x4300($s0)
    ctx->pc = 0x117f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950144), GPR_U32(ctx, 17));
    // 0x117f88: 0x2484bf00  addiu       $a0, $a0, -0x4100
    ctx->pc = 0x117f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950656));
    // 0x117f8c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x117f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x117f90: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x117f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x117f94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117f98: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x117f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117f9c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x117f9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fa0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x117fa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117fa4: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x117FA4u;
    SET_GPR_U32(ctx, 31, 0x117FACu);
    ctx->pc = 0x117FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117FA4u;
    // 0x117fa8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x117FA4u, 0x117FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FACu;
label_117fac:
    // 0x117fac: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117FACu;
    {
        const bool branch_taken_0x117fac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x117fac) {
            ctx->pc = 0x117FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117FACu;
            // 0x117fb0: 0x8e02bd00  lw          $v0, -0x4300($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117FBCu;
            goto label_117fbc;
        }
    }
    ctx->pc = 0x117FB4u;
    // 0x117fb4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x117fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x117fb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x117fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_117fbc:
    // 0x117fbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117fc0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x117fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117fc4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x117fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x117FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FC8u;
        // 0x117fcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117FD0u;
}
