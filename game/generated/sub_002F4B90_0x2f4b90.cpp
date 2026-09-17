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

// Function: sub_002F4B90
// Address: 0x2f4b90 - 0x2f4f58
void sub_002F4B90_0x2f4b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4B90_0x2f4b90");
#endif

    switch (ctx->pc) {
        case 0x2f4bb8u: goto label_2f4bb8;
        case 0x2f4bccu: goto label_2f4bcc;
        case 0x2f4be0u: goto label_2f4be0;
        case 0x2f4bf4u: goto label_2f4bf4;
        case 0x2f4c08u: goto label_2f4c08;
        case 0x2f4c1cu: goto label_2f4c1c;
        case 0x2f4c30u: goto label_2f4c30;
        case 0x2f4c44u: goto label_2f4c44;
        case 0x2f4c58u: goto label_2f4c58;
        case 0x2f4c6cu: goto label_2f4c6c;
        case 0x2f4c80u: goto label_2f4c80;
        case 0x2f4c94u: goto label_2f4c94;
        case 0x2f4ca8u: goto label_2f4ca8;
        case 0x2f4cbcu: goto label_2f4cbc;
        case 0x2f4cd0u: goto label_2f4cd0;
        case 0x2f4ce4u: goto label_2f4ce4;
        case 0x2f4cf8u: goto label_2f4cf8;
        case 0x2f4d0cu: goto label_2f4d0c;
        case 0x2f4d20u: goto label_2f4d20;
        case 0x2f4d34u: goto label_2f4d34;
        case 0x2f4d48u: goto label_2f4d48;
        case 0x2f4d5cu: goto label_2f4d5c;
        case 0x2f4d70u: goto label_2f4d70;
        case 0x2f4d84u: goto label_2f4d84;
        case 0x2f4d98u: goto label_2f4d98;
        case 0x2f4dacu: goto label_2f4dac;
        case 0x2f4dc0u: goto label_2f4dc0;
        case 0x2f4dd4u: goto label_2f4dd4;
        case 0x2f4de8u: goto label_2f4de8;
        case 0x2f4dfcu: goto label_2f4dfc;
        case 0x2f4e10u: goto label_2f4e10;
        case 0x2f4e24u: goto label_2f4e24;
        case 0x2f4e38u: goto label_2f4e38;
        case 0x2f4e4cu: goto label_2f4e4c;
        case 0x2f4e60u: goto label_2f4e60;
        case 0x2f4e74u: goto label_2f4e74;
        case 0x2f4e88u: goto label_2f4e88;
        case 0x2f4e9cu: goto label_2f4e9c;
        case 0x2f4eb0u: goto label_2f4eb0;
        case 0x2f4ec4u: goto label_2f4ec4;
        case 0x2f4ed8u: goto label_2f4ed8;
        case 0x2f4eecu: goto label_2f4eec;
        case 0x2f4f00u: goto label_2f4f00;
        case 0x2f4f14u: goto label_2f4f14;
        case 0x2f4f28u: goto label_2f4f28;
        case 0x2f4f3cu: goto label_2f4f3c;
        default: break;
    }

    ctx->pc = 0x2f4b90u;

    // 0x2f4b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f4b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f4b94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f4b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f4b98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f4b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b9c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4ba0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f4ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f4ba4: 0x24a513d0  addiu       $a1, $a1, 0x13D0
    ctx->pc = 0x2f4ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5072));
    // 0x2f4ba8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f4ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f4bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f4bb0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4BB0u;
    SET_GPR_U32(ctx, 31, 0x2F4BB8u);
    ctx->pc = 0x2F4BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4BB0u;
    // 0x2f4bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4BB0u, 0x2F4BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4BB8u;
label_2f4bb8:
    // 0x2f4bb8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4bbc: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x2f4bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x2f4bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bc4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4BC4u;
    SET_GPR_U32(ctx, 31, 0x2F4BCCu);
    ctx->pc = 0x2F4BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4BC4u;
    // 0x2f4bc8: 0x24a513e0  addiu       $a1, $a1, 0x13E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4BC4u, 0x2F4BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4BCCu;
label_2f4bcc:
    // 0x2f4bcc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4bd0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2f4bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x2f4bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bd8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4BD8u;
    SET_GPR_U32(ctx, 31, 0x2F4BE0u);
    ctx->pc = 0x2F4BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4BD8u;
    // 0x2f4bdc: 0x24a513f0  addiu       $a1, $a1, 0x13F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4BD8u, 0x2F4BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4BE0u;
label_2f4be0:
    // 0x2f4be0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4be4: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x2f4be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x2f4be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bec: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4BECu;
    SET_GPR_U32(ctx, 31, 0x2F4BF4u);
    ctx->pc = 0x2F4BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4BECu;
    // 0x2f4bf0: 0x24a51400  addiu       $a1, $a1, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4BECu, 0x2F4BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4BF4u;
label_2f4bf4:
    // 0x2f4bf4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4bf8: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x2f4bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x2f4bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c00: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4C00u;
    SET_GPR_U32(ctx, 31, 0x2F4C08u);
    ctx->pc = 0x2F4C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C00u;
    // 0x2f4c04: 0x24a51410  addiu       $a1, $a1, 0x1410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4C00u, 0x2F4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C08u;
label_2f4c08:
    // 0x2f4c08: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4c0c: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x2f4c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x2f4c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c14: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4C14u;
    SET_GPR_U32(ctx, 31, 0x2F4C1Cu);
    ctx->pc = 0x2F4C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C14u;
    // 0x2f4c18: 0x24a51420  addiu       $a1, $a1, 0x1420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4C14u, 0x2F4C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C1Cu;
label_2f4c1c:
    // 0x2f4c1c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4c20: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2f4c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x2f4c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c28: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4C28u;
    SET_GPR_U32(ctx, 31, 0x2F4C30u);
    ctx->pc = 0x2F4C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C28u;
    // 0x2f4c2c: 0x24a51430  addiu       $a1, $a1, 0x1430 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4C28u, 0x2F4C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C30u;
label_2f4c30:
    // 0x2f4c30: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4c34: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x2f4c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x2f4c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c3c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4C3Cu;
    SET_GPR_U32(ctx, 31, 0x2F4C44u);
    ctx->pc = 0x2F4C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C3Cu;
    // 0x2f4c40: 0x24a51440  addiu       $a1, $a1, 0x1440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4C3Cu, 0x2F4C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C44u;
label_2f4c44:
    // 0x2f4c44: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4c48: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x2f4c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x2f4c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c50: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4C50u;
    SET_GPR_U32(ctx, 31, 0x2F4C58u);
    ctx->pc = 0x2F4C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C50u;
    // 0x2f4c54: 0x24a51450  addiu       $a1, $a1, 0x1450 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4C50u, 0x2F4C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C58u;
label_2f4c58:
    // 0x2f4c58: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4c5c: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x2f4c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x2f4c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c64: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4C64u;
    SET_GPR_U32(ctx, 31, 0x2F4C6Cu);
    ctx->pc = 0x2F4C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C64u;
    // 0x2f4c68: 0x24a51460  addiu       $a1, $a1, 0x1460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4C64u, 0x2F4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C6Cu;
label_2f4c6c:
    // 0x2f4c6c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4c70: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x2f4c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x2f4c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c78: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4C78u;
    SET_GPR_U32(ctx, 31, 0x2F4C80u);
    ctx->pc = 0x2F4C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C78u;
    // 0x2f4c7c: 0x24a51470  addiu       $a1, $a1, 0x1470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4C78u, 0x2F4C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C80u;
label_2f4c80:
    // 0x2f4c80: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4c84: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x2f4c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x2f4c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c8c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4C8Cu;
    SET_GPR_U32(ctx, 31, 0x2F4C94u);
    ctx->pc = 0x2F4C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C8Cu;
    // 0x2f4c90: 0x24a51480  addiu       $a1, $a1, 0x1480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4C8Cu, 0x2F4C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C94u;
label_2f4c94:
    // 0x2f4c94: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4c94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4c98: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x2f4c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x2f4c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ca0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4CA0u;
    SET_GPR_U32(ctx, 31, 0x2F4CA8u);
    ctx->pc = 0x2F4CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CA0u;
    // 0x2f4ca4: 0x24a51490  addiu       $a1, $a1, 0x1490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4CA0u, 0x2F4CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CA8u;
label_2f4ca8:
    // 0x2f4ca8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4cac: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x2f4cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x2f4cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4cb4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4CB4u;
    SET_GPR_U32(ctx, 31, 0x2F4CBCu);
    ctx->pc = 0x2F4CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CB4u;
    // 0x2f4cb8: 0x24a514a0  addiu       $a1, $a1, 0x14A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4CB4u, 0x2F4CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CBCu;
label_2f4cbc:
    // 0x2f4cbc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4cc0: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x2f4cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
    // 0x2f4cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4cc8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4CC8u;
    SET_GPR_U32(ctx, 31, 0x2F4CD0u);
    ctx->pc = 0x2F4CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CC8u;
    // 0x2f4ccc: 0x24a514b0  addiu       $a1, $a1, 0x14B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4CC8u, 0x2F4CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CD0u;
label_2f4cd0:
    // 0x2f4cd0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4cd4: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x2f4cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
    // 0x2f4cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4cdc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4CDCu;
    SET_GPR_U32(ctx, 31, 0x2F4CE4u);
    ctx->pc = 0x2F4CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CDCu;
    // 0x2f4ce0: 0x24a514c0  addiu       $a1, $a1, 0x14C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4CDCu, 0x2F4CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CE4u;
label_2f4ce4:
    // 0x2f4ce4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4ce8: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x2f4ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
    // 0x2f4cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4cf0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4CF0u;
    SET_GPR_U32(ctx, 31, 0x2F4CF8u);
    ctx->pc = 0x2F4CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CF0u;
    // 0x2f4cf4: 0x24a514d0  addiu       $a1, $a1, 0x14D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4CF0u, 0x2F4CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CF8u;
label_2f4cf8:
    // 0x2f4cf8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4cfc: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x2f4cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    // 0x2f4d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d04: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4D04u;
    SET_GPR_U32(ctx, 31, 0x2F4D0Cu);
    ctx->pc = 0x2F4D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D04u;
    // 0x2f4d08: 0x24a514e8  addiu       $a1, $a1, 0x14E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4D04u, 0x2F4D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D0Cu;
label_2f4d0c:
    // 0x2f4d0c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4d10: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x2f4d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x2f4d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d18: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4D18u;
    SET_GPR_U32(ctx, 31, 0x2F4D20u);
    ctx->pc = 0x2F4D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D18u;
    // 0x2f4d1c: 0x24a514f8  addiu       $a1, $a1, 0x14F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4D18u, 0x2F4D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D20u;
label_2f4d20:
    // 0x2f4d20: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4d24: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x2f4d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    // 0x2f4d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d2c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4D2Cu;
    SET_GPR_U32(ctx, 31, 0x2F4D34u);
    ctx->pc = 0x2F4D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D2Cu;
    // 0x2f4d30: 0x24a51510  addiu       $a1, $a1, 0x1510 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4D2Cu, 0x2F4D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D34u;
label_2f4d34:
    // 0x2f4d34: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4d38: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x2f4d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x2f4d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d40: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4D40u;
    SET_GPR_U32(ctx, 31, 0x2F4D48u);
    ctx->pc = 0x2F4D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D40u;
    // 0x2f4d44: 0x24a51520  addiu       $a1, $a1, 0x1520 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4D40u, 0x2F4D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D48u;
label_2f4d48:
    // 0x2f4d48: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4d4c: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x2f4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
    // 0x2f4d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d54: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4D54u;
    SET_GPR_U32(ctx, 31, 0x2F4D5Cu);
    ctx->pc = 0x2F4D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D54u;
    // 0x2f4d58: 0x24a51538  addiu       $a1, $a1, 0x1538 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4D54u, 0x2F4D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D5Cu;
label_2f4d5c:
    // 0x2f4d5c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4d60: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x2f4d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
    // 0x2f4d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d68: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4D68u;
    SET_GPR_U32(ctx, 31, 0x2F4D70u);
    ctx->pc = 0x2F4D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D68u;
    // 0x2f4d6c: 0x24a51550  addiu       $a1, $a1, 0x1550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4D68u, 0x2F4D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D70u;
label_2f4d70:
    // 0x2f4d70: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4d74: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x2f4d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
    // 0x2f4d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d7c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4D7Cu;
    SET_GPR_U32(ctx, 31, 0x2F4D84u);
    ctx->pc = 0x2F4D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D7Cu;
    // 0x2f4d80: 0x24a51568  addiu       $a1, $a1, 0x1568 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4D7Cu, 0x2F4D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D84u;
label_2f4d84:
    // 0x2f4d84: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4d88: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x2f4d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
    // 0x2f4d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d90: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4D90u;
    SET_GPR_U32(ctx, 31, 0x2F4D98u);
    ctx->pc = 0x2F4D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D90u;
    // 0x2f4d94: 0x24a51580  addiu       $a1, $a1, 0x1580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4D90u, 0x2F4D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D98u;
label_2f4d98:
    // 0x2f4d98: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4d9c: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x2f4d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x2f4da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4da4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4DA4u;
    SET_GPR_U32(ctx, 31, 0x2F4DACu);
    ctx->pc = 0x2F4DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4DA4u;
    // 0x2f4da8: 0x24a51590  addiu       $a1, $a1, 0x1590 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4DA4u, 0x2F4DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4DACu;
label_2f4dac:
    // 0x2f4dac: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4db0: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x2f4db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x2f4db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4db8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4DB8u;
    SET_GPR_U32(ctx, 31, 0x2F4DC0u);
    ctx->pc = 0x2F4DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4DB8u;
    // 0x2f4dbc: 0x24a515a0  addiu       $a1, $a1, 0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4DB8u, 0x2F4DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4DC0u;
label_2f4dc0:
    // 0x2f4dc0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4dc4: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x2f4dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
    // 0x2f4dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4dcc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4DCCu;
    SET_GPR_U32(ctx, 31, 0x2F4DD4u);
    ctx->pc = 0x2F4DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4DCCu;
    // 0x2f4dd0: 0x24a515b0  addiu       $a1, $a1, 0x15B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4DCCu, 0x2F4DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4DD4u;
label_2f4dd4:
    // 0x2f4dd4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4dd8: 0xae2200bc  sw          $v0, 0xBC($s1)
    ctx->pc = 0x2f4dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
    // 0x2f4ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4de0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4DE0u;
    SET_GPR_U32(ctx, 31, 0x2F4DE8u);
    ctx->pc = 0x2F4DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4DE0u;
    // 0x2f4de4: 0x24a515c0  addiu       $a1, $a1, 0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4DE0u, 0x2F4DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4DE8u;
label_2f4de8:
    // 0x2f4de8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4dec: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x2f4decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x2f4df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4df4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4DF4u;
    SET_GPR_U32(ctx, 31, 0x2F4DFCu);
    ctx->pc = 0x2F4DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4DF4u;
    // 0x2f4df8: 0x24a515d8  addiu       $a1, $a1, 0x15D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4DF4u, 0x2F4DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4DFCu;
label_2f4dfc:
    // 0x2f4dfc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4e00: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x2f4e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    // 0x2f4e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e08: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4E08u;
    SET_GPR_U32(ctx, 31, 0x2F4E10u);
    ctx->pc = 0x2F4E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E08u;
    // 0x2f4e0c: 0x24a515e8  addiu       $a1, $a1, 0x15E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4E08u, 0x2F4E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E10u;
label_2f4e10:
    // 0x2f4e10: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4e14: 0xae2200c8  sw          $v0, 0xC8($s1)
    ctx->pc = 0x2f4e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
    // 0x2f4e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e1c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4E1Cu;
    SET_GPR_U32(ctx, 31, 0x2F4E24u);
    ctx->pc = 0x2F4E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E1Cu;
    // 0x2f4e20: 0x24a51600  addiu       $a1, $a1, 0x1600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4E1Cu, 0x2F4E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E24u;
label_2f4e24:
    // 0x2f4e24: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4e28: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x2f4e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
    // 0x2f4e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e30: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4E30u;
    SET_GPR_U32(ctx, 31, 0x2F4E38u);
    ctx->pc = 0x2F4E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E30u;
    // 0x2f4e34: 0x24a51610  addiu       $a1, $a1, 0x1610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4E30u, 0x2F4E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E38u;
label_2f4e38:
    // 0x2f4e38: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4e3c: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x2f4e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x2f4e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e44: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4E44u;
    SET_GPR_U32(ctx, 31, 0x2F4E4Cu);
    ctx->pc = 0x2F4E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E44u;
    // 0x2f4e48: 0x24a51620  addiu       $a1, $a1, 0x1620 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4E44u, 0x2F4E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E4Cu;
label_2f4e4c:
    // 0x2f4e4c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4e50: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x2f4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x2f4e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e58: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4E58u;
    SET_GPR_U32(ctx, 31, 0x2F4E60u);
    ctx->pc = 0x2F4E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E58u;
    // 0x2f4e5c: 0x24a51638  addiu       $a1, $a1, 0x1638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4E58u, 0x2F4E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E60u;
label_2f4e60:
    // 0x2f4e60: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4e64: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x2f4e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
    // 0x2f4e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e6c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4E6Cu;
    SET_GPR_U32(ctx, 31, 0x2F4E74u);
    ctx->pc = 0x2F4E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E6Cu;
    // 0x2f4e70: 0x24a51650  addiu       $a1, $a1, 0x1650 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4E6Cu, 0x2F4E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E74u;
label_2f4e74:
    // 0x2f4e74: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4e78: 0xae2200dc  sw          $v0, 0xDC($s1)
    ctx->pc = 0x2f4e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
    // 0x2f4e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e80: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4E80u;
    SET_GPR_U32(ctx, 31, 0x2F4E88u);
    ctx->pc = 0x2F4E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E80u;
    // 0x2f4e84: 0x24a51668  addiu       $a1, $a1, 0x1668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4E80u, 0x2F4E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E88u;
label_2f4e88:
    // 0x2f4e88: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4e8c: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x2f4e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
    // 0x2f4e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e94: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4E94u;
    SET_GPR_U32(ctx, 31, 0x2F4E9Cu);
    ctx->pc = 0x2F4E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E94u;
    // 0x2f4e98: 0x24a51680  addiu       $a1, $a1, 0x1680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4E94u, 0x2F4E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E9Cu;
label_2f4e9c:
    // 0x2f4e9c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4ea0: 0xae2200e4  sw          $v0, 0xE4($s1)
    ctx->pc = 0x2f4ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
    // 0x2f4ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ea8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4EA8u;
    SET_GPR_U32(ctx, 31, 0x2F4EB0u);
    ctx->pc = 0x2F4EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4EA8u;
    // 0x2f4eac: 0x24a51690  addiu       $a1, $a1, 0x1690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4EA8u, 0x2F4EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4EB0u;
label_2f4eb0:
    // 0x2f4eb0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4eb4: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x2f4eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
    // 0x2f4eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ebc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4EBCu;
    SET_GPR_U32(ctx, 31, 0x2F4EC4u);
    ctx->pc = 0x2F4EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4EBCu;
    // 0x2f4ec0: 0x24a516a0  addiu       $a1, $a1, 0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4EBCu, 0x2F4EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4EC4u;
label_2f4ec4:
    // 0x2f4ec4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4ec8: 0xae2200ec  sw          $v0, 0xEC($s1)
    ctx->pc = 0x2f4ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 2));
    // 0x2f4ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ed0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4ED0u;
    SET_GPR_U32(ctx, 31, 0x2F4ED8u);
    ctx->pc = 0x2F4ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4ED0u;
    // 0x2f4ed4: 0x24a516b8  addiu       $a1, $a1, 0x16B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4ED0u, 0x2F4ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4ED8u;
label_2f4ed8:
    // 0x2f4ed8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4edc: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x2f4edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x2f4ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ee4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4EE4u;
    SET_GPR_U32(ctx, 31, 0x2F4EECu);
    ctx->pc = 0x2F4EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4EE4u;
    // 0x2f4ee8: 0x24a516d0  addiu       $a1, $a1, 0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4EE4u, 0x2F4EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4EECu;
label_2f4eec:
    // 0x2f4eec: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4ef0: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x2f4ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
    // 0x2f4ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ef8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4EF8u;
    SET_GPR_U32(ctx, 31, 0x2F4F00u);
    ctx->pc = 0x2F4EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4EF8u;
    // 0x2f4efc: 0x24a516e0  addiu       $a1, $a1, 0x16E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4EF8u, 0x2F4F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4F00u;
label_2f4f00:
    // 0x2f4f00: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4f04: 0xae2200f8  sw          $v0, 0xF8($s1)
    ctx->pc = 0x2f4f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
    // 0x2f4f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4f0c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4F0Cu;
    SET_GPR_U32(ctx, 31, 0x2F4F14u);
    ctx->pc = 0x2F4F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4F0Cu;
    // 0x2f4f10: 0x24a516f8  addiu       $a1, $a1, 0x16F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4F0Cu, 0x2F4F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4F14u;
label_2f4f14:
    // 0x2f4f14: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4f18: 0xae2200fc  sw          $v0, 0xFC($s1)
    ctx->pc = 0x2f4f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 2));
    // 0x2f4f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4f20: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4F20u;
    SET_GPR_U32(ctx, 31, 0x2F4F28u);
    ctx->pc = 0x2F4F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4F20u;
    // 0x2f4f24: 0x24a51710  addiu       $a1, $a1, 0x1710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4F20u, 0x2F4F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4F28u;
label_2f4f28:
    // 0x2f4f28: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f4f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f4f2c: 0xae220100  sw          $v0, 0x100($s1)
    ctx->pc = 0x2f4f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
    // 0x2f4f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4f34: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F4F34u;
    SET_GPR_U32(ctx, 31, 0x2F4F3Cu);
    ctx->pc = 0x2F4F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4F34u;
    // 0x2f4f38: 0x24a51728  addiu       $a1, $a1, 0x1728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F4F34u, 0x2F4F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4F3Cu;
label_2f4f3c:
    // 0x2f4f3c: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x2f4f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
    // 0x2f4f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f4f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4f44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f4f44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f4f48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f4f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F4Cu;
        // 0x2f4f50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4F54u;
    // 0x2f4f54: 0x0  nop
    ctx->pc = 0x2f4f54u;
    // NOP
    ctx->pc = 0x2f4f58u;
}
