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

// Function: sub_0011FE20
// Address: 0x11fe20 - 0x11fee8
void sub_0011FE20_0x11fe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FE20_0x11fe20");
#endif

    switch (ctx->pc) {
        case 0x11fed4u: goto label_11fed4;
        default: break;
    }

    ctx->pc = 0x11fe20u;

    // 0x11fe20: 0x44066000  mfc1        $a2, $f12
    ctx->pc = 0x11fe20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x11fe24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11fe24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11fe28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11fe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11fe2c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x11fe2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11fe30: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11fe34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11fe34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11fe38: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x11fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x11fe3c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11fe3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11fe40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11fe40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11fe44: 0x22dc2  srl         $a1, $v0, 23
    ctx->pc = 0x11fe44u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x11fe48: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x11fe48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11fe4c: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x11fe4cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x11fe50: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x11FE50u;
    {
        const bool branch_taken_0x11fe50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE50u;
        // 0x11fe54: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe50) {
            ctx->pc = 0x11FED8u;
            goto label_11fed8;
        }
    }
    ctx->pc = 0x11FE58u;
    // 0x11fe58: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x11fe58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x11fe5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FE5Cu;
    {
        const bool branch_taken_0x11fe5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE5Cu;
        // 0x11fe60: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe5c) {
            ctx->pc = 0x11FE78u;
            goto label_11fe78;
        }
    }
    ctx->pc = 0x11FE64u;
    // 0x11fe64: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x11fe64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11fe68: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x11fe68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x11fe6c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11fe6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11fe70: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11FE70u;
    {
        const bool branch_taken_0x11fe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fe70) {
            ctx->pc = 0x11FECCu;
            goto label_11fecc;
        }
    }
    ctx->pc = 0x11FE78u;
label_11fe78:
    // 0x11fe78: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11FE78u;
    {
        const bool branch_taken_0x11fe78 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x11FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE78u;
        // 0x11fe7c: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe78) {
            ctx->pc = 0x11FEA0u;
            goto label_11fea0;
        }
    }
    ctx->pc = 0x11FE80u;
    // 0x11fe80: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x11fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x11fe84: 0x51dc0  sll         $v1, $a1, 23
    ctx->pc = 0x11fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 23));
    // 0x11fe88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11fe88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11fe8c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11fe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11fe90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11fe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11fe94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11fe94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11fe98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11FE98u;
    {
        const bool branch_taken_0x11fe98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE98u;
        // 0x11fe9c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe98) {
            ctx->pc = 0x11FED8u;
            goto label_11fed8;
        }
    }
    ctx->pc = 0x11FEA0u;
label_11fea0:
    // 0x11fea0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11fea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11fea4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FEA4u;
    {
        const bool branch_taken_0x11fea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEA4u;
        // 0x11fea8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fea4) {
            ctx->pc = 0x11FEC0u;
            goto label_11fec0;
        }
    }
    ctx->pc = 0x11FEACu;
    // 0x11feac: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x11feacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11feb0: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x11feb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x11feb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11feb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11feb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11FEB8u;
    {
        const bool branch_taken_0x11feb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11feb8) {
            ctx->pc = 0x11FECCu;
            goto label_11fecc;
        }
    }
    ctx->pc = 0x11FEC0u;
label_11fec0:
    // 0x11fec0: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x11fec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x11fec4: 0x3421425f  ori         $at, $at, 0x425F
    ctx->pc = 0x11fec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16991);
    // 0x11fec8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11fec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_11fecc:
    // 0x11fecc: 0xc047fba  jal         func_11FEE8
    ctx->pc = 0x11FECCu;
    SET_GPR_U32(ctx, 31, 0x11FED4u);
    ctx->pc = 0x11FED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FECCu;
    // 0x11fed0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FEE8u, 0x11FECCu, 0x11FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FED4u;
label_11fed4:
    // 0x11fed4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x11fed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_11fed8:
    // 0x11fed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11fed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fedc: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x11fedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11fee0: 0x3e00008  jr          $ra
    ctx->pc = 0x11FEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEE0u;
        // 0x11fee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FEE8u;
}
