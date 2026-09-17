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

// Function: sub_002E3CE8
// Address: 0x2e3ce8 - 0x2e3e18
void sub_002E3CE8_0x2e3ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3CE8_0x2e3ce8");
#endif

    switch (ctx->pc) {
        case 0x2e3d48u: goto label_2e3d48;
        case 0x2e3d60u: goto label_2e3d60;
        case 0x2e3db8u: goto label_2e3db8;
        case 0x2e3df0u: goto label_2e3df0;
        default: break;
    }

    ctx->pc = 0x2e3ce8u;

    // 0x2e3ce8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e3ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e3cec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3cf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e3cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e3cf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3cf8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e3cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e3cfc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e3cfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e3d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e3d04: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e3d04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d08: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e3d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2e3d0c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2e3d0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e3d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e3d14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e3d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e3d18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e3d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e3d1c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2e3d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2e3d20: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2e3d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2e3d24: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2e3d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2e3d28: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2e3d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2e3d2c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2e3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x2e3d30: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e3d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e3d34: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x2e3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x2e3d38: 0x26120074  addiu       $s2, $s0, 0x74
    ctx->pc = 0x2e3d38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x2e3d3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e3d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e3d40: 0xc0c1126  jal         func_304498
    ctx->pc = 0x2E3D40u;
    SET_GPR_U32(ctx, 31, 0x2E3D48u);
    ctx->pc = 0x2E3D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D40u;
    // 0x2e3d44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304498u, 0x2E3D40u, 0x2E3D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D48u;
label_2e3d48:
    // 0x2e3d48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e3d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e3d4c: 0x261100b4  addiu       $s1, $s0, 0xB4
    ctx->pc = 0x2e3d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x2e3d50: 0x2442ed18  addiu       $v0, $v0, -0x12E8
    ctx->pc = 0x2e3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962456));
    // 0x2e3d54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e3d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d58: 0xc0bf854  jal         func_2FE150
    ctx->pc = 0x2E3D58u;
    SET_GPR_U32(ctx, 31, 0x2E3D60u);
    ctx->pc = 0x2E3D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D58u;
    // 0x2e3d5c: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE150u, 0x2E3D58u, 0x2E3D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D60u;
label_2e3d60:
    // 0x2e3d60: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e3d64: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2e3d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2e3d68: 0x2442ed60  addiu       $v0, $v0, -0x12A0
    ctx->pc = 0x2e3d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962528));
    // 0x2e3d6c: 0x3c01c3fa  lui         $at, 0xC3FA
    ctx->pc = 0x2e3d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50170 << 16));
    // 0x2e3d70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e3d74: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2e3d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x2e3d78: 0xae510038  sw          $s1, 0x38($s2)
    ctx->pc = 0x2e3d78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 17));
    // 0x2e3d7c: 0xae140054  sw          $s4, 0x54($s0)
    ctx->pc = 0x2e3d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 20));
    // 0x2e3d80: 0xae130050  sw          $s3, 0x50($s0)
    ctx->pc = 0x2e3d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 19));
    // 0x2e3d84: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2e3d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2e3d88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3d8c: 0x8c4288d0  lw          $v0, -0x7730($v0)
    ctx->pc = 0x2e3d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    // 0x2e3d90: 0xae150070  sw          $s5, 0x70($s0)
    ctx->pc = 0x2e3d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 21));
    // 0x2e3d94: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3D94u;
    {
        const bool branch_taken_0x2e3d94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D94u;
        // 0x2e3d98: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d94) {
            ctx->pc = 0x2E3DA4u;
            goto label_2e3da4;
        }
    }
    ctx->pc = 0x2E3D9Cu;
    // 0x2e3d9c: 0x3c01c3ff  lui         $at, 0xC3FF
    ctx->pc = 0x2e3d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50175 << 16));
    // 0x2e3da0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e3da4:
    // 0x2e3da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3da8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e3da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3dac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e3dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3db0: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2E3DB0u;
    SET_GPR_U32(ctx, 31, 0x2E3DB8u);
    ctx->pc = 0x2E3DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3DB0u;
    // 0x2e3db4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2E3DB0u, 0x2E3DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3DB8u;
label_2e3db8:
    // 0x2e3db8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2e3db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e3dbc: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2e3dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e3dc0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e3dc4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2e3dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2e3dc8: 0x2442fbd0  addiu       $v0, $v0, -0x430
    ctx->pc = 0x2e3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966224));
    // 0x2e3dcc: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2e3dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2e3dd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3DD0u;
    {
        const bool branch_taken_0x2e3dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DD0u;
        // 0x2e3dd4: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3dd0) {
            ctx->pc = 0x2E3DF0u;
            goto label_2e3df0;
        }
    }
    ctx->pc = 0x2E3DD8u;
    // 0x2e3dd8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e3ddc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e3ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e3de0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e3de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e3de4: 0x24840448  addiu       $a0, $a0, 0x448
    ctx->pc = 0x2e3de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1096));
    // 0x2e3de8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E3DE8u;
    SET_GPR_U32(ctx, 31, 0x2E3DF0u);
    ctx->pc = 0x2E3DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3DE8u;
    // 0x2e3dec: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E3DE8u, 0x2E3DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3DF0u;
label_2e3df0:
    // 0x2e3df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e3df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3df4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e3df4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e3df8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e3df8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3dfc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e3dfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e3e00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e3e00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3e04: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e3e04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e3e08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e3e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3E0Cu;
        // 0x2e3e10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3E14u;
    // 0x2e3e14: 0x0  nop
    ctx->pc = 0x2e3e14u;
    // NOP
    ctx->pc = 0x2e3e18u;
}
