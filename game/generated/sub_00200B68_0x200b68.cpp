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

// Function: sub_00200B68
// Address: 0x200b68 - 0x200e78
void sub_00200B68_0x200b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200B68_0x200b68");
#endif

    switch (ctx->pc) {
        case 0x200bd0u: goto label_200bd0;
        case 0x200bf4u: goto label_200bf4;
        case 0x200c08u: goto label_200c08;
        case 0x200c38u: goto label_200c38;
        case 0x200c90u: goto label_200c90;
        case 0x200cb0u: goto label_200cb0;
        case 0x200cfcu: goto label_200cfc;
        case 0x200d84u: goto label_200d84;
        case 0x200e44u: goto label_200e44;
        default: break;
    }

    ctx->pc = 0x200b68u;

    // 0x200b68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x200b6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x200b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x200b70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x200b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200b78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200b7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x200b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x200b80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x200b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x200b84: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x200b84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x200b88: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x200b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x200b8c: 0x544000b2  bnel        $v0, $zero, . + 4 + (0xB2 << 2)
    ctx->pc = 0x200B8Cu;
    {
        const bool branch_taken_0x200b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200b8c) {
            ctx->pc = 0x200B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200B8Cu;
            // 0x200b90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200E58u;
            goto label_200e58;
        }
    }
    ctx->pc = 0x200B94u;
    // 0x200b94: 0x924301bc  lbu         $v1, 0x1BC($s2)
    ctx->pc = 0x200b94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x200b98: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x200b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x200b9c: 0x106200ad  beq         $v1, $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x200B9Cu;
    {
        const bool branch_taken_0x200b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x200BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B9Cu;
        // 0x200ba0: 0x26530820  addiu       $s3, $s2, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b9c) {
            ctx->pc = 0x200E54u;
            goto label_200e54;
        }
    }
    ctx->pc = 0x200BA4u;
    // 0x200ba4: 0x96650004  lhu         $a1, 0x4($s3)
    ctx->pc = 0x200ba4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x200ba8: 0x30a24000  andi        $v0, $a1, 0x4000
    ctx->pc = 0x200ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x200bac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x200BACu;
    {
        const bool branch_taken_0x200bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BACu;
        // 0x200bb0: 0x26500818  addiu       $s0, $s2, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bac) {
            ctx->pc = 0x200BD8u;
            goto label_200bd8;
        }
    }
    ctx->pc = 0x200BB4u;
    // 0x200bb4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x200bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200bb8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x200bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x200bbc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x200bbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x200bc0: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x200BC0u;
    {
        const bool branch_taken_0x200bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x200bc0) {
            ctx->pc = 0x200BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200BC0u;
            // 0x200bc4: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
            ctx->in_delay_slot = false;
            ctx->pc = 0x200C00u;
            goto label_200c00;
        }
    }
    ctx->pc = 0x200BC8u;
    // 0x200bc8: 0xc0b1db0  jal         func_2C76C0
    ctx->pc = 0x200BC8u;
    SET_GPR_U32(ctx, 31, 0x200BD0u);
    ctx->pc = 0x200BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200BC8u;
    // 0x200bcc: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C76C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C76C0u, 0x200BC8u, 0x200BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BD0u;
label_200bd0:
    // 0x200bd0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x200BD0u;
    {
        const bool branch_taken_0x200bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BD0u;
        // 0x200bd4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bd0) {
            ctx->pc = 0x200C0Cu;
            goto label_200c0c;
        }
    }
    ctx->pc = 0x200BD8u;
label_200bd8:
    // 0x200bd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x200bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200bdc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x200bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x200be0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x200be0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x200be4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x200BE4u;
    {
        const bool branch_taken_0x200be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x200be4) {
            ctx->pc = 0x200C00u;
            goto label_200c00;
        }
    }
    ctx->pc = 0x200BECu;
    // 0x200bec: 0xc0b1db0  jal         func_2C76C0
    ctx->pc = 0x200BECu;
    SET_GPR_U32(ctx, 31, 0x200BF4u);
    ctx->pc = 0x2C76C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C76C0u, 0x200BECu, 0x200BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BF4u;
label_200bf4:
    // 0x200bf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x200BF4u;
    {
        const bool branch_taken_0x200bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BF4u;
        // 0x200bf8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bf4) {
            ctx->pc = 0x200C0Cu;
            goto label_200c0c;
        }
    }
    ctx->pc = 0x200BFCu;
    // 0x200bfc: 0x0  nop
    ctx->pc = 0x200bfcu;
    // NOP
label_200c00:
    // 0x200c00: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x200C00u;
    SET_GPR_U32(ctx, 31, 0x200C08u);
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x200C00u, 0x200C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C08u;
label_200c08:
    // 0x200c08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x200c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200c0c:
    // 0x200c0c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x200c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x200c10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x200C10u;
    {
        const bool branch_taken_0x200c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C10u;
        // 0x200c14: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c10) {
            ctx->pc = 0x200C30u;
            goto label_200c30;
        }
    }
    ctx->pc = 0x200C18u;
    // 0x200c18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x200c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x200c1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200c20: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x200c20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x200c24: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x200C24u;
    {
        const bool branch_taken_0x200c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C24u;
        // 0x200c28: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c24) {
            ctx->pc = 0x200E54u;
            goto label_200e54;
        }
    }
    ctx->pc = 0x200C2Cu;
    // 0x200c2c: 0x0  nop
    ctx->pc = 0x200c2cu;
    // NOP
label_200c30:
    // 0x200c30: 0xc08215c  jal         func_208570
    ctx->pc = 0x200C30u;
    SET_GPR_U32(ctx, 31, 0x200C38u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x200C30u, 0x200C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C38u;
label_200c38:
    // 0x200c38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x200c38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c3c: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x200c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x200c40: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x200C40u;
    {
        const bool branch_taken_0x200c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200c40) {
            ctx->pc = 0x200C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200C40u;
            // 0x200c44: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200C9Cu;
            goto label_200c9c;
        }
    }
    ctx->pc = 0x200C48u;
    // 0x200c48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x200c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x200c4c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x200c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x200c50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x200c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x200c54: 0x8c633940  lw          $v1, 0x3940($v1)
    ctx->pc = 0x200c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14656)));
    // 0x200c58: 0x600008  jr          $v1
    ctx->pc = 0x200C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200C60u: goto label_200c60;
            case 0x200C98u: goto label_200c98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200C58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x200C60u;
label_200c60:
    // 0x200c60: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x200c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x200c64: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x200c64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200c68: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x200C68u;
    {
        const bool branch_taken_0x200c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200c68) {
            ctx->pc = 0x200CC8u;
            goto label_200cc8;
        }
    }
    ctx->pc = 0x200C70u;
    // 0x200c70: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x200c70u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x200c74: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x200c74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x200c78: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x200c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200c7c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x200c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200c80: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x200C80u;
    {
        const bool branch_taken_0x200c80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x200c80) {
            ctx->pc = 0x200C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200C80u;
            // 0x200c84: 0xc6600000  lwc1        $f0, 0x0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x200CD4u;
            goto label_200cd4;
        }
    }
    ctx->pc = 0x200C88u;
    // 0x200c88: 0xc09ec7c  jal         func_27B1F0
    ctx->pc = 0x200C88u;
    SET_GPR_U32(ctx, 31, 0x200C90u);
    ctx->pc = 0x27B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B1F0u, 0x200C88u, 0x200C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C90u;
label_200c90:
    // 0x200c90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x200C90u;
    {
        const bool branch_taken_0x200c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C90u;
        // 0x200c94: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c90) {
            ctx->pc = 0x200CBCu;
            goto label_200cbc;
        }
    }
    ctx->pc = 0x200C98u;
label_200c98:
    // 0x200c98: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x200c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_200c9c:
    // 0x200c9c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x200c9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200ca0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x200CA0u;
    {
        const bool branch_taken_0x200ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200ca0) {
            ctx->pc = 0x200CC8u;
            goto label_200cc8;
        }
    }
    ctx->pc = 0x200CA8u;
    // 0x200ca8: 0xc09ec7c  jal         func_27B1F0
    ctx->pc = 0x200CA8u;
    SET_GPR_U32(ctx, 31, 0x200CB0u);
    ctx->pc = 0x27B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B1F0u, 0x200CA8u, 0x200CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CB0u;
label_200cb0:
    // 0x200cb0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x200cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200cb4: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x200cb4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x200cb8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x200cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_200cbc:
    // 0x200cbc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x200cbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x200cc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x200CC0u;
    {
        const bool branch_taken_0x200cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CC0u;
        // 0x200cc4: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x200cc0) {
            ctx->pc = 0x200CD0u;
            goto label_200cd0;
        }
    }
    ctx->pc = 0x200CC8u;
label_200cc8:
    // 0x200cc8: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x200cc8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x200ccc: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x200cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_200cd0:
    // 0x200cd0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x200cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_200cd4:
    // 0x200cd4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x200cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200cd8: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x200CD8u;
    {
        const bool branch_taken_0x200cd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x200cd8) {
            ctx->pc = 0x200CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200CD8u;
            // 0x200cdc: 0x96020006  lhu         $v0, 0x6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200D10u;
            goto label_200d10;
        }
    }
    ctx->pc = 0x200CE0u;
    // 0x200ce0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x200ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x200ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200ce8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x200ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x200cec: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x200cecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x200cf0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x200cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x200cf4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x200CF4u;
    SET_GPR_U32(ctx, 31, 0x200CFCu);
    ctx->pc = 0x200CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CF4u;
    // 0x200cf8: 0xa6000004  sh          $zero, 0x4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x200CF4u, 0x200CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CFCu;
label_200cfc:
    // 0x200cfc: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x200cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x200d00: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x200d00u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x200d04: 0x2010  mfhi        $a0
    ctx->pc = 0x200d04u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x200d08: 0xa64402c6  sh          $a0, 0x2C6($s2)
    ctx->pc = 0x200d08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 710), (uint16_t)GPR_U32(ctx, 4));
    // 0x200d0c: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x200d0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_200d10:
    // 0x200d10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200D10u;
    {
        const bool branch_taken_0x200d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D10u;
        // 0x200d14: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d10) {
            ctx->pc = 0x200D24u;
            goto label_200d24;
        }
    }
    ctx->pc = 0x200D18u;
    // 0x200d18: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x200d18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x200d1c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x200d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x200d20: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x200d20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_200d24:
    // 0x200d24: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x200d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x200d28: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x200d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x200d2c: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x200D2Cu;
    {
        const bool branch_taken_0x200d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200d2c) {
            ctx->pc = 0x200D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200D2Cu;
            // 0x200d30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200E58u;
            goto label_200e58;
        }
    }
    ctx->pc = 0x200D34u;
    // 0x200d34: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x200d34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200d38: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x200D38u;
    {
        const bool branch_taken_0x200d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D38u;
        // 0x200d3c: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d38) {
            ctx->pc = 0x200E54u;
            goto label_200e54;
        }
    }
    ctx->pc = 0x200D40u;
    // 0x200d40: 0x9242019f  lbu         $v0, 0x19F($s2)
    ctx->pc = 0x200d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 415)));
    // 0x200d44: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x200D44u;
    {
        const bool branch_taken_0x200d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200d44) {
            ctx->pc = 0x200D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200D44u;
            // 0x200d48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200E58u;
            goto label_200e58;
        }
    }
    ctx->pc = 0x200D4Cu;
    // 0x200d4c: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x200d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x200d50: 0x86440096  lh          $a0, 0x96($s2)
    ctx->pc = 0x200d50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x200d54: 0x94430044  lhu         $v1, 0x44($v0)
    ctx->pc = 0x200d54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x200d58: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x200d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x200d5c: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x200D5Cu;
    {
        const bool branch_taken_0x200d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x200D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D5Cu;
        // 0x200d60: 0xc7809884  lwc1        $f0, -0x677C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d5c) {
            ctx->pc = 0x200D90u;
            goto label_200d90;
        }
    }
    ctx->pc = 0x200D64u;
    // 0x200d64: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x200d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x200d68: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x200d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x200d6c: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x200d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x200d70: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x200d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x200d74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d78: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x200d78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x200d7c: 0xc0959a2  jal         func_256688
    ctx->pc = 0x200D7Cu;
    SET_GPR_U32(ctx, 31, 0x200D84u);
    ctx->pc = 0x200D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D7Cu;
    // 0x200d80: 0xa64302c6  sh          $v1, 0x2C6($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 710), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256688u, 0x200D7Cu, 0x200D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D84u;
label_200d84:
    // 0x200d84: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x200D84u;
    {
        const bool branch_taken_0x200d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D84u;
        // 0x200d88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d84) {
            ctx->pc = 0x200E58u;
            goto label_200e58;
        }
    }
    ctx->pc = 0x200D8Cu;
    // 0x200d8c: 0x0  nop
    ctx->pc = 0x200d8cu;
    // NOP
label_200d90:
    // 0x200d90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x200d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x200d94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200d98: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x200d98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200d9c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x200D9Cu;
    {
        const bool branch_taken_0x200d9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x200d9c) {
            ctx->pc = 0x200DD8u;
            goto label_200dd8;
        }
    }
    ctx->pc = 0x200DA4u;
    // 0x200da4: 0x964202c6  lhu         $v0, 0x2C6($s2)
    ctx->pc = 0x200da4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 710)));
    // 0x200da8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x200da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x200dac: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x200dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x200db0: 0x4610028  bgez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x200DB0u;
    {
        const bool branch_taken_0x200db0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x200DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DB0u;
        // 0x200db4: 0xa64202c6  sh          $v0, 0x2C6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 710), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200db0) {
            ctx->pc = 0x200E54u;
            goto label_200e54;
        }
    }
    ctx->pc = 0x200DB8u;
    // 0x200db8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x200db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x200dbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200dc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x200dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x200dc4: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x200dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x200dc8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x200dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x200dcc: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x200dccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x200dd0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x200DD0u;
    {
        const bool branch_taken_0x200dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DD0u;
        // 0x200dd4: 0xa64202c6  sh          $v0, 0x2C6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 710), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200dd0) {
            ctx->pc = 0x200E54u;
            goto label_200e54;
        }
    }
    ctx->pc = 0x200DD8u;
label_200dd8:
    // 0x200dd8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x200dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x200ddc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200de0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x200de0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200de4: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x200DE4u;
    {
        const bool branch_taken_0x200de4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x200de4) {
            ctx->pc = 0x200DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200DE4u;
            // 0x200de8: 0x964202c6  lhu         $v0, 0x2C6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 710)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200E04u;
            goto label_200e04;
        }
    }
    ctx->pc = 0x200DECu;
    // 0x200dec: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x200decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x200df0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200df4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x200df4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200df8: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x200DF8u;
    {
        const bool branch_taken_0x200df8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x200df8) {
            ctx->pc = 0x200DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200DF8u;
            // 0x200dfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200E58u;
            goto label_200e58;
        }
    }
    ctx->pc = 0x200E00u;
    // 0x200e00: 0x964202c6  lhu         $v0, 0x2C6($s2)
    ctx->pc = 0x200e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 710)));
label_200e04:
    // 0x200e04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x200e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x200e08: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x200e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x200e0c: 0x4610011  bgez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x200E0Cu;
    {
        const bool branch_taken_0x200e0c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x200E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E0Cu;
        // 0x200e10: 0xa64202c6  sh          $v0, 0x2C6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 710), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e0c) {
            ctx->pc = 0x200E54u;
            goto label_200e54;
        }
    }
    ctx->pc = 0x200E14u;
    // 0x200e14: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x200e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x200e18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200e1c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x200e1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200e20: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x200E20u;
    {
        const bool branch_taken_0x200e20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x200E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E20u;
        // 0x200e24: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e20) {
            ctx->pc = 0x200E2Cu;
            goto label_200e2c;
        }
    }
    ctx->pc = 0x200E28u;
    // 0x200e28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200e2c:
    // 0x200e2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x200e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x200e30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200e34: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x200e34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x200e38: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x200e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x200e3c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x200E3Cu;
    SET_GPR_U32(ctx, 31, 0x200E44u);
    ctx->pc = 0x200E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E3Cu;
    // 0x200e40: 0xa6000004  sh          $zero, 0x4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x200E3Cu, 0x200E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E44u;
label_200e44:
    // 0x200e44: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x200e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x200e48: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x200e48u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x200e4c: 0x2010  mfhi        $a0
    ctx->pc = 0x200e4cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x200e50: 0xa64402c6  sh          $a0, 0x2C6($s2)
    ctx->pc = 0x200e50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 710), (uint16_t)GPR_U32(ctx, 4));
label_200e54:
    // 0x200e54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200e58:
    // 0x200e58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200e58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200e5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200e5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200e60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x200e60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200e64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x200e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200e68: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x200e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x200e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x200E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E6Cu;
        // 0x200e70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200E74u;
    // 0x200e74: 0x0  nop
    ctx->pc = 0x200e74u;
    // NOP
    ctx->pc = 0x200e78u;
}
