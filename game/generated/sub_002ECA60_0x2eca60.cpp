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

// Function: sub_002ECA60
// Address: 0x2eca60 - 0x2ecc38
void sub_002ECA60_0x2eca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECA60_0x2eca60");
#endif

    switch (ctx->pc) {
        case 0x2eca88u: goto label_2eca88;
        case 0x2ecab4u: goto label_2ecab4;
        case 0x2ecb10u: goto label_2ecb10;
        case 0x2ecb20u: goto label_2ecb20;
        case 0x2ecb3cu: goto label_2ecb3c;
        case 0x2ecb4cu: goto label_2ecb4c;
        case 0x2ecb68u: goto label_2ecb68;
        case 0x2ecb78u: goto label_2ecb78;
        case 0x2ecb94u: goto label_2ecb94;
        case 0x2ecba4u: goto label_2ecba4;
        case 0x2ecbc0u: goto label_2ecbc0;
        case 0x2ecbd0u: goto label_2ecbd0;
        case 0x2ecbf4u: goto label_2ecbf4;
        case 0x2ecc20u: goto label_2ecc20;
        default: break;
    }

    ctx->pc = 0x2eca60u;

    // 0x2eca60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eca64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eca68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2eca68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eca6c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2eca6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eca70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2eca74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2eca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2eca78: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2eca78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eca7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2eca7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2eca80: 0xc0bbd40  jal         func_2EF500
    ctx->pc = 0x2ECA80u;
    SET_GPR_U32(ctx, 31, 0x2ECA88u);
    ctx->pc = 0x2ECA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECA80u;
    // 0x2eca84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF500u, 0x2ECA80u, 0x2ECA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECA88u;
label_2eca88:
    // 0x2eca88: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2eca88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2eca8c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2eca8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2eca90: 0x26260140  addiu       $a2, $s1, 0x140
    ctx->pc = 0x2eca90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x2eca94: 0x2463ef98  addiu       $v1, $v1, -0x1068
    ctx->pc = 0x2eca94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963096));
    // 0x2eca98: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2eca98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2eca9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eca9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecaa0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2ecaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2ecaa4: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x2ecaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x2ecaa8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ecaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ecaac: 0xc0bbd88  jal         func_2EF620
    ctx->pc = 0x2ECAACu;
    SET_GPR_U32(ctx, 31, 0x2ECAB4u);
    ctx->pc = 0x2ECAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECAACu;
    // 0x2ecab0: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF620u, 0x2ECAACu, 0x2ECAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECAB4u;
label_2ecab4:
    // 0x2ecab4: 0x26470050  addiu       $a3, $s2, 0x50
    ctx->pc = 0x2ecab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2ecab8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2ecab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ecabc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECABCu;
    {
        const bool branch_taken_0x2ecabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECABCu;
        // 0x2ecac0: 0x262800b8  addiu       $t0, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecabc) {
            ctx->pc = 0x2ECAD8u;
            goto label_2ecad8;
        }
    }
    ctx->pc = 0x2ECAC4u;
    // 0x2ecac4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ecac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ecac8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ecac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecacc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2ecaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2ecad0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECAD0u;
    {
        const bool branch_taken_0x2ecad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ecad0) {
            ctx->pc = 0x2ECAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECAD0u;
            // 0x2ecad4: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECAE8u;
            goto label_2ecae8;
        }
    }
    ctx->pc = 0x2ECAD8u;
label_2ecad8:
    // 0x2ecad8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2ecad8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2ecadc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ecadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecae0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2ecae0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2ecae4: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x2ecae4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_2ecae8:
    // 0x2ecae8: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2ecae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2ecaec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ecaecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecaf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecaf4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2ecaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ecaf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ecaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecafc: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2ecafcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x2ecb00: 0x80c3f454  lb          $v1, -0xBAC($a2)
    ctx->pc = 0x2ecb00u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x3EF454u));
    // 0x2ecb04: 0xae270128  sw          $a3, 0x128($s1)
    ctx->pc = 0x2ecb04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 7));
    // 0x2ecb08: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2ECB08u;
    SET_GPR_U32(ctx, 31, 0x2ECB10u);
    ctx->pc = 0x2ECB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB08u;
    // 0x2ecb0c: 0xae230104  sw          $v1, 0x104($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2ECB08u, 0x2ECB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB10u;
label_2ecb10:
    // 0x2ecb10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ecb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ecb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb18: 0xc0bb27a  jal         func_2EC9E8
    ctx->pc = 0x2ECB18u;
    SET_GPR_U32(ctx, 31, 0x2ECB20u);
    ctx->pc = 0x2ECB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB18u;
    // 0x2ecb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC9E8u, 0x2ECB18u, 0x2ECB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB20u;
label_2ecb20:
    // 0x2ecb20: 0x26230058  addiu       $v1, $s1, 0x58
    ctx->pc = 0x2ecb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x2ecb24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb28: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ecb28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ecb2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ecb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb30: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ecb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ecb34: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2ECB34u;
    SET_GPR_U32(ctx, 31, 0x2ECB3Cu);
    ctx->pc = 0x2ECB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB34u;
    // 0x2ecb38: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2ECB34u, 0x2ECB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB3Cu;
label_2ecb3c:
    // 0x2ecb3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ecb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ecb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecb44: 0xc0bb27a  jal         func_2EC9E8
    ctx->pc = 0x2ECB44u;
    SET_GPR_U32(ctx, 31, 0x2ECB4Cu);
    ctx->pc = 0x2ECB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB44u;
    // 0x2ecb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC9E8u, 0x2ECB44u, 0x2ECB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB4Cu;
label_2ecb4c:
    // 0x2ecb4c: 0x26230060  addiu       $v1, $s1, 0x60
    ctx->pc = 0x2ecb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2ecb50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb54: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ecb54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ecb58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ecb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb5c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ecb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ecb60: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2ECB60u;
    SET_GPR_U32(ctx, 31, 0x2ECB68u);
    ctx->pc = 0x2ECB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB60u;
    // 0x2ecb64: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2ECB60u, 0x2ECB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB68u;
label_2ecb68:
    // 0x2ecb68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ecb68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ecb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ecb70: 0xc0bb27a  jal         func_2EC9E8
    ctx->pc = 0x2ECB70u;
    SET_GPR_U32(ctx, 31, 0x2ECB78u);
    ctx->pc = 0x2ECB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB70u;
    // 0x2ecb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC9E8u, 0x2ECB70u, 0x2ECB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB78u;
label_2ecb78:
    // 0x2ecb78: 0x26230068  addiu       $v1, $s1, 0x68
    ctx->pc = 0x2ecb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x2ecb7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb80: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ecb80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ecb84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ecb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb88: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ecb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ecb8c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2ECB8Cu;
    SET_GPR_U32(ctx, 31, 0x2ECB94u);
    ctx->pc = 0x2ECB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB8Cu;
    // 0x2ecb90: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2ECB8Cu, 0x2ECB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB94u;
label_2ecb94:
    // 0x2ecb94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ecb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb98: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ecb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ecb9c: 0xc0bb27a  jal         func_2EC9E8
    ctx->pc = 0x2ECB9Cu;
    SET_GPR_U32(ctx, 31, 0x2ECBA4u);
    ctx->pc = 0x2ECBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECB9Cu;
    // 0x2ecba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC9E8u, 0x2ECB9Cu, 0x2ECBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECBA4u;
label_2ecba4:
    // 0x2ecba4: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x2ecba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2ecba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbac: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ecbacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ecbb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ecbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbb4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ecbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ecbb8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2ECBB8u;
    SET_GPR_U32(ctx, 31, 0x2ECBC0u);
    ctx->pc = 0x2ECBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECBB8u;
    // 0x2ecbbc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2ECBB8u, 0x2ECBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECBC0u;
label_2ecbc0:
    // 0x2ecbc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ecbc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbc4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ecbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ecbc8: 0xc0bb27a  jal         func_2EC9E8
    ctx->pc = 0x2ECBC8u;
    SET_GPR_U32(ctx, 31, 0x2ECBD0u);
    ctx->pc = 0x2ECBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECBC8u;
    // 0x2ecbcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC9E8u, 0x2ECBC8u, 0x2ECBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECBD0u;
label_2ecbd0:
    // 0x2ecbd0: 0x26230078  addiu       $v1, $s1, 0x78
    ctx->pc = 0x2ecbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2ecbd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ecbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbd8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ecbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ecbdc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ecbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ecbe0: 0x24060860  addiu       $a2, $zero, 0x860
    ctx->pc = 0x2ecbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x2ecbe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ecbe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecbe8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ecbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ecbec: 0xc0bbd8a  jal         func_2EF628
    ctx->pc = 0x2ECBECu;
    SET_GPR_U32(ctx, 31, 0x2ECBF4u);
    ctx->pc = 0x2ECBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECBECu;
    // 0x2ecbf0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF628u, 0x2ECBECu, 0x2ECBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECBF4u;
label_2ecbf4:
    // 0x2ecbf4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2ecbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2ecbf8: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x2ecbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x2ecbfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ECBFCu;
    {
        const bool branch_taken_0x2ecbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBFCu;
        // 0x2ecc00: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecbfc) {
            ctx->pc = 0x2ECC20u;
            goto label_2ecc20;
        }
    }
    ctx->pc = 0x2ECC04u;
    // 0x2ecc04: 0x0  nop
    ctx->pc = 0x2ecc04u;
    // NOP
    // 0x2ecc08: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2ecc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2ecc0c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2ecc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2ecc10: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2ecc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2ecc14: 0x2484063c  addiu       $a0, $a0, 0x63C
    ctx->pc = 0x2ecc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1596));
    // 0x2ecc18: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2ECC18u;
    SET_GPR_U32(ctx, 31, 0x2ECC20u);
    ctx->pc = 0x2ECC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC18u;
    // 0x2ecc1c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2ECC18u, 0x2ECC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC20u;
label_2ecc20:
    // 0x2ecc20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ecc20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecc24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ecc24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ecc28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ecc28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecc2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ecc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ecc30: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC30u;
        // 0x2ecc34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECC38u;
}
