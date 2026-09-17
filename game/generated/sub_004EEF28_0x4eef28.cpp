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

// Function: sub_004EEF28
// Address: 0x4eef28 - 0x4ef028
void sub_004EEF28_0x4eef28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEF28_0x4eef28");
#endif

    switch (ctx->pc) {
        case 0x4eefb8u: goto label_4eefb8;
        case 0x4ef000u: goto label_4ef000;
        default: break;
    }

    ctx->pc = 0x4eef28u;

    // 0x4eef28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4eef28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4eef2c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4eef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4eef30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4eef30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4eef34: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4eef34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4eef38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4eef38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4eef3c: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4eef3cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4eef40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4eef40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4eef44: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4eef44u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4eef48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4eef48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4eef4c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4eef4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4eef50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4eef50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4eef54: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4eef54u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4eef58: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4eef58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4eef5c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4eef5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eef60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4eef60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4eef64: 0x26731208  addiu       $s3, $s3, 0x1208
    ctx->pc = 0x4eef64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4616));
    // 0x4eef68: 0x263111e8  addiu       $s1, $s1, 0x11E8
    ctx->pc = 0x4eef68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4584));
    // 0x4eef6c: 0x265211ec  addiu       $s2, $s2, 0x11EC
    ctx->pc = 0x4eef6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4588));
    // 0x4eef70: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4eef70u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F1208u));
    // 0x4eef74: 0x261011fc  addiu       $s0, $s0, 0x11FC
    ctx->pc = 0x4eef74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4604));
    // 0x4eef78: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4eef78u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4eef7c: 0x24a411f8  addiu       $a0, $a1, 0x11F8
    ctx->pc = 0x4eef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4600));
    // 0x4eef80: 0x84e20022  lh          $v0, 0x22($a3)
    ctx->pc = 0x4eef80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 34)));
    // 0x4eef84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eef84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eef88: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eef88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eef8c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4eef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4eef90: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4eef90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4eef94: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4eef94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4eef98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eef98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eef9c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4eef9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4eefa0: 0x84e20024  lh          $v0, 0x24($a3)
    ctx->pc = 0x4eefa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x4eefa4: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4eefa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4eefa8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eefa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eefac: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4eefacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4eefb0: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4EEFB0u;
    SET_GPR_U32(ctx, 31, 0x4EEFB8u);
    ctx->pc = 0x4EEFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEFB0u;
    // 0x4eefb4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4EEFB0u, 0x4EEFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EEFB8u;
label_4eefb8:
    // 0x4eefb8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4eefb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eefbc: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4eefbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eefc0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4eefc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4eefc4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eefc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eefc8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4eefc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eefcc: 0x84e20026  lh          $v0, 0x26($a3)
    ctx->pc = 0x4eefccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x4eefd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eefd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eefd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eefd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eefd8: 0x248411f4  addiu       $a0, $a0, 0x11F4
    ctx->pc = 0x4eefd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4596));
    // 0x4eefdc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4eefdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4eefe0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4eefe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4eefe4: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4eefe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4eefe8: 0x84e20028  lh          $v0, 0x28($a3)
    ctx->pc = 0x4eefe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x4eefec: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4eefecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4eeff0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eeff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eeff4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4eeff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4eeff8: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4EEFF8u;
    SET_GPR_U32(ctx, 31, 0x4EF000u);
    ctx->pc = 0x4EEFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEFF8u;
    // 0x4eeffc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4EEFF8u, 0x4EF000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EF000u;
label_4ef000:
    // 0x4ef000: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ef000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ef004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef008: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ef008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ef00c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ef00cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ef010: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ef010u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ef014: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ef014u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ef018: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ef018u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ef01c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ef01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ef020: 0x813bc62  j           func_4EF188
    ctx->pc = 0x4EF020u;
    ctx->pc = 0x4EF024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF020u;
    // 0x4ef024: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EF188u, 0x4EF020u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4EF028u;
}
