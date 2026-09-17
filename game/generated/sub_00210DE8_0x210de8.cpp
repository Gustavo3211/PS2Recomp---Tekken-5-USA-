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

// Function: sub_00210DE8
// Address: 0x210de8 - 0x211068
void sub_00210DE8_0x210de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210DE8_0x210de8");
#endif

    switch (ctx->pc) {
        case 0x210e6cu: goto label_210e6c;
        case 0x210eb4u: goto label_210eb4;
        case 0x210ef8u: goto label_210ef8;
        case 0x210f3cu: goto label_210f3c;
        case 0x210f80u: goto label_210f80;
        case 0x210fc4u: goto label_210fc4;
        case 0x211008u: goto label_211008;
        case 0x21104cu: goto label_21104c;
        default: break;
    }

    ctx->pc = 0x210de8u;

    // 0x210de8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x210de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x210dec: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x210decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x210df0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x210df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210df4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x210df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x210df8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x210df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x210dfc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x210dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x210e00: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x210e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x210e04: 0x9630003c  lhu         $s0, 0x3C($s1)
    ctx->pc = 0x210e04u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x210e08: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x210e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x210e0c: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x210e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x210e10: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x210e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x210e14: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x210e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x210e18: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x210e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x210e1c: 0x8c845930  lw          $a0, 0x5930($a0)
    ctx->pc = 0x210e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22832)));
    // 0x210e20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x210e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x210e24: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x210e24u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x210e28: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x210e28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x210e2c: 0x8652a5ac  lh          $s2, -0x5A54($s2)
    ctx->pc = 0x210e2cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294944172)));
    // 0x210e30: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x210E30u;
    {
        const bool branch_taken_0x210e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x210E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E30u;
        // 0x210e34: 0x3c130015  lui         $s3, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e30) {
            ctx->pc = 0x210E6Cu;
            goto label_210e6c;
        }
    }
    ctx->pc = 0x210E38u;
    // 0x210e38: 0x8e230894  lw          $v1, 0x894($s1)
    ctx->pc = 0x210e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x210e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x210e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x210e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e48: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x210e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x210e4c: 0x24420b40  addiu       $v0, $v0, 0xB40
    ctx->pc = 0x210e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2880));
    // 0x210e50: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x210e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210e54: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x210e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x210e58: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x210e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210e5c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x210e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x210e60: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x210e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210e64: 0xc094dcc  jal         func_253730
    ctx->pc = 0x210E64u;
    SET_GPR_U32(ctx, 31, 0x210E6Cu);
    ctx->pc = 0x210E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210E64u;
    // 0x210e68: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x210E64u, 0x210E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E6Cu;
label_210e6c:
    // 0x210e6c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x210e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x210e70: 0x26625930  addiu       $v0, $s3, 0x5930
    ctx->pc = 0x210e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22832));
    // 0x210e74: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x210e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x210e78: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x210e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x210e7c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x210E7Cu;
    {
        const bool branch_taken_0x210e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E7Cu;
        // 0x210e80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e7c) {
            ctx->pc = 0x210EB4u;
            goto label_210eb4;
        }
    }
    ctx->pc = 0x210E84u;
    // 0x210e84: 0x8e230894  lw          $v1, 0x894($s1)
    ctx->pc = 0x210e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x210e88: 0x9624003c  lhu         $a0, 0x3C($s1)
    ctx->pc = 0x210e88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x210e8c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x210e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e90: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x210e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x210e94: 0x24420900  addiu       $v0, $v0, 0x900
    ctx->pc = 0x210e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2304));
    // 0x210e98: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x210e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210e9c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x210e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x210ea0: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x210ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210ea4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x210ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x210ea8: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x210ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210eac: 0xc094dcc  jal         func_253730
    ctx->pc = 0x210EACu;
    SET_GPR_U32(ctx, 31, 0x210EB4u);
    ctx->pc = 0x210EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210EACu;
    // 0x210eb0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x210EACu, 0x210EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210EB4u;
label_210eb4:
    // 0x210eb4: 0x26625930  addiu       $v0, $s3, 0x5930
    ctx->pc = 0x210eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22832));
    // 0x210eb8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x210eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x210ebc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x210ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x210ec0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x210EC0u;
    {
        const bool branch_taken_0x210ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EC0u;
        // 0x210ec4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ec0) {
            ctx->pc = 0x210EF8u;
            goto label_210ef8;
        }
    }
    ctx->pc = 0x210EC8u;
    // 0x210ec8: 0x8e230894  lw          $v1, 0x894($s1)
    ctx->pc = 0x210ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x210ecc: 0x9624003c  lhu         $a0, 0x3C($s1)
    ctx->pc = 0x210eccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x210ed0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x210ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ed4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x210ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x210ed8: 0x24420ab0  addiu       $v0, $v0, 0xAB0
    ctx->pc = 0x210ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2736));
    // 0x210edc: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x210edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210ee0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x210ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x210ee4: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x210ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210ee8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x210ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x210eec: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x210eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210ef0: 0xc094dcc  jal         func_253730
    ctx->pc = 0x210EF0u;
    SET_GPR_U32(ctx, 31, 0x210EF8u);
    ctx->pc = 0x210EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210EF0u;
    // 0x210ef4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x210EF0u, 0x210EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210EF8u;
label_210ef8:
    // 0x210ef8: 0x26625930  addiu       $v0, $s3, 0x5930
    ctx->pc = 0x210ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22832));
    // 0x210efc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x210efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x210f00: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x210f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x210f04: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x210F04u;
    {
        const bool branch_taken_0x210f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F04u;
        // 0x210f08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f04) {
            ctx->pc = 0x210F3Cu;
            goto label_210f3c;
        }
    }
    ctx->pc = 0x210F0Cu;
    // 0x210f0c: 0x8e230894  lw          $v1, 0x894($s1)
    ctx->pc = 0x210f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x210f10: 0x9624003c  lhu         $a0, 0x3C($s1)
    ctx->pc = 0x210f10u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x210f14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x210f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f18: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x210f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x210f1c: 0x24420870  addiu       $v0, $v0, 0x870
    ctx->pc = 0x210f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
    // 0x210f20: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x210f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210f24: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x210f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x210f28: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x210f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210f2c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x210f2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x210f30: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x210f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210f34: 0xc094dcc  jal         func_253730
    ctx->pc = 0x210F34u;
    SET_GPR_U32(ctx, 31, 0x210F3Cu);
    ctx->pc = 0x210F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F34u;
    // 0x210f38: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x210F34u, 0x210F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F3Cu;
label_210f3c:
    // 0x210f3c: 0x26625930  addiu       $v0, $s3, 0x5930
    ctx->pc = 0x210f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22832));
    // 0x210f40: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x210f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x210f44: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x210f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x210f48: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x210F48u;
    {
        const bool branch_taken_0x210f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F48u;
        // 0x210f4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f48) {
            ctx->pc = 0x210F80u;
            goto label_210f80;
        }
    }
    ctx->pc = 0x210F50u;
    // 0x210f50: 0x8e230894  lw          $v1, 0x894($s1)
    ctx->pc = 0x210f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x210f54: 0x9624003c  lhu         $a0, 0x3C($s1)
    ctx->pc = 0x210f54u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x210f58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x210f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f5c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x210f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x210f60: 0x244205a0  addiu       $v0, $v0, 0x5A0
    ctx->pc = 0x210f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x210f64: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x210f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210f68: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x210f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x210f6c: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x210f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210f70: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x210f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x210f74: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x210f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210f78: 0xc094dcc  jal         func_253730
    ctx->pc = 0x210F78u;
    SET_GPR_U32(ctx, 31, 0x210F80u);
    ctx->pc = 0x210F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F78u;
    // 0x210f7c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x210F78u, 0x210F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F80u;
label_210f80:
    // 0x210f80: 0x26625930  addiu       $v0, $s3, 0x5930
    ctx->pc = 0x210f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22832));
    // 0x210f84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x210f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x210f88: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x210f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x210f8c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x210F8Cu;
    {
        const bool branch_taken_0x210f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F8Cu;
        // 0x210f90: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f8c) {
            ctx->pc = 0x210FC4u;
            goto label_210fc4;
        }
    }
    ctx->pc = 0x210F94u;
    // 0x210f94: 0x8e230894  lw          $v1, 0x894($s1)
    ctx->pc = 0x210f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x210f98: 0x9624003c  lhu         $a0, 0x3C($s1)
    ctx->pc = 0x210f98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x210f9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x210f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fa0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x210fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x210fa4: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x210fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x210fa8: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x210fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210fac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x210facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x210fb0: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x210fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210fb4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x210fb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x210fb8: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x210fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210fbc: 0xc094dcc  jal         func_253730
    ctx->pc = 0x210FBCu;
    SET_GPR_U32(ctx, 31, 0x210FC4u);
    ctx->pc = 0x210FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210FBCu;
    // 0x210fc0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x210FBCu, 0x210FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210FC4u;
label_210fc4:
    // 0x210fc4: 0x26625930  addiu       $v0, $s3, 0x5930
    ctx->pc = 0x210fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22832));
    // 0x210fc8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x210fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x210fcc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x210fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x210fd0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x210FD0u;
    {
        const bool branch_taken_0x210fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FD0u;
        // 0x210fd4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210fd0) {
            ctx->pc = 0x211008u;
            goto label_211008;
        }
    }
    ctx->pc = 0x210FD8u;
    // 0x210fd8: 0x8e230894  lw          $v1, 0x894($s1)
    ctx->pc = 0x210fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x210fdc: 0x9624003c  lhu         $a0, 0x3C($s1)
    ctx->pc = 0x210fdcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x210fe0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x210fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fe4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x210fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x210fe8: 0x244206c0  addiu       $v0, $v0, 0x6C0
    ctx->pc = 0x210fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x210fec: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x210fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210ff0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x210ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x210ff4: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x210ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210ff8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x210ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x210ffc: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x210ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211000: 0xc094dcc  jal         func_253730
    ctx->pc = 0x211000u;
    SET_GPR_U32(ctx, 31, 0x211008u);
    ctx->pc = 0x211004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211000u;
    // 0x211004: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x211000u, 0x211008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211008u;
label_211008:
    // 0x211008: 0x26625930  addiu       $v0, $s3, 0x5930
    ctx->pc = 0x211008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22832));
    // 0x21100c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x21100cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x211010: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x211010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x211014: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x211014u;
    {
        const bool branch_taken_0x211014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211014u;
        // 0x211018: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211014) {
            ctx->pc = 0x21104Cu;
            goto label_21104c;
        }
    }
    ctx->pc = 0x21101Cu;
    // 0x21101c: 0x8e230894  lw          $v1, 0x894($s1)
    ctx->pc = 0x21101cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x211020: 0x9624003c  lhu         $a0, 0x3C($s1)
    ctx->pc = 0x211020u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x211024: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x211024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211028: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x211028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x21102c: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x21102cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x211030: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x211030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211034: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x211034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x211038: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x211038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21103c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x21103cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x211040: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x211040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211044: 0xc094dcc  jal         func_253730
    ctx->pc = 0x211044u;
    SET_GPR_U32(ctx, 31, 0x21104Cu);
    ctx->pc = 0x211048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211044u;
    // 0x211048: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x211044u, 0x21104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21104Cu;
label_21104c:
    // 0x21104c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x21104cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211050: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x211050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x211054: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x211054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211058: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x211058u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21105c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21105cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211060: 0x3e00008  jr          $ra
    ctx->pc = 0x211060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211060u;
        // 0x211064: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211068u;
}
