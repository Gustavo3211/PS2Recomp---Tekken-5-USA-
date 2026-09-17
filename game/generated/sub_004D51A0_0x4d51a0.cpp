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

// Function: sub_004D51A0
// Address: 0x4d51a0 - 0x4d5558
void sub_004D51A0_0x4d51a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D51A0_0x4d51a0");
#endif

    switch (ctx->pc) {
        case 0x4d5244u: goto label_4d5244;
        case 0x4d5288u: goto label_4d5288;
        case 0x4d52ccu: goto label_4d52cc;
        case 0x4d5300u: goto label_4d5300;
        case 0x4d5534u: goto label_4d5534;
        default: break;
    }

    ctx->pc = 0x4d51a0u;

    // 0x4d51a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d51a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4d51a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d51a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d51a8: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4d51a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4d51ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d51acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d51b0: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4d51b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4d51b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d51b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d51b8: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4d51b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4d51bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d51bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d51c0: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4d51c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4d51c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d51c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d51c8: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4d51c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4d51cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d51ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d51d0: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x4d51d0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x4d51d4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d51d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4d51d8: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4d51d8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4d51dc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d51dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4d51e0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4d51e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d51e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d51e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4d51e8: 0x26d61074  addiu       $s6, $s6, 0x1074
    ctx->pc = 0x4d51e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4212));
    // 0x4d51ec: 0x26311060  addiu       $s1, $s1, 0x1060
    ctx->pc = 0x4d51ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4192));
    // 0x4d51f0: 0x26521064  addiu       $s2, $s2, 0x1064
    ctx->pc = 0x4d51f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4196));
    // 0x4d51f4: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x4d51f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1074u));
    // 0x4d51f8: 0x26941068  addiu       $s4, $s4, 0x1068
    ctx->pc = 0x4d51f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4200));
    // 0x4d51fc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4d51fcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1060u));
    // 0x4d5200: 0x2610106c  addiu       $s0, $s0, 0x106C
    ctx->pc = 0x4d5200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4204));
    // 0x4d5204: 0x84a2002a  lh          $v0, 0x2A($a1)
    ctx->pc = 0x4d5204u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x4d5208: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d5208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d520c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d520cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d5210: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d5210u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1064u));
    // 0x4d5214: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4d5214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4d5218: 0x26731070  addiu       $s3, $s3, 0x1070
    ctx->pc = 0x4d5218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4208));
    // 0x4d521c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d521cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d5220: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5224: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4d5224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4d5228: 0x84a2002c  lh          $v0, 0x2C($a1)
    ctx->pc = 0x4d5228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x4d522c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d522cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5230: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4d5230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4d5234: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5238: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d5238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4d523c: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4D523Cu;
    SET_GPR_U32(ctx, 31, 0x4D5244u);
    ctx->pc = 0x4D5240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D523Cu;
    // 0x4d5240: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4D523Cu, 0x4D5244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5244u;
label_4d5244:
    // 0x4d5244: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4d5244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5248: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x4d5248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4d524c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d524cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5250: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d5250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d5254: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d5254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d5258: 0x84e20022  lh          $v0, 0x22($a3)
    ctx->pc = 0x4d5258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 34)));
    // 0x4d525c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4d525cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5260: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5264: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4d5264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4d5268: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d5268u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d526c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4d526cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4d5270: 0x84e20024  lh          $v0, 0x24($a3)
    ctx->pc = 0x4d5270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x4d5274: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4d5274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4d5278: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d527c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d527cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4d5280: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4D5280u;
    SET_GPR_U32(ctx, 31, 0x4D5288u);
    ctx->pc = 0x4D5284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5280u;
    // 0x4d5284: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4D5280u, 0x4D5288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5288u;
label_4d5288:
    // 0x4d5288: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4d5288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d528c: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x4d528cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4d5290: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d5290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5294: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d5294u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d5298: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d5298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d529c: 0x84e20026  lh          $v0, 0x26($a3)
    ctx->pc = 0x4d529cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x4d52a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4d52a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d52a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d52a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d52a8: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4d52a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4d52ac: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d52acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d52b0: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4d52b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4d52b4: 0x84e20028  lh          $v0, 0x28($a3)
    ctx->pc = 0x4d52b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x4d52b8: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4d52b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4d52bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d52bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d52c0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d52c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4d52c4: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D52C4u;
    SET_GPR_U32(ctx, 31, 0x4D52CCu);
    ctx->pc = 0x4D52C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D52C4u;
    // 0x4d52c8: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D52C4u, 0x4D52CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D52CCu;
label_4d52cc:
    // 0x4d52cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4d52ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d52d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d52d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d52d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d52d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d52d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d52d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d52dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d52dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d52e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d52e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d52e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d52e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d52e8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d52e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d52ec: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d52ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d52f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d52f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d52f4: 0x81354c0  j           func_4D5300
    ctx->pc = 0x4D52F4u;
    ctx->pc = 0x4D52F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D52F4u;
    // 0x4d52f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5300u;
    goto label_4d5300;
    ctx->pc = 0x4D52FCu;
    // 0x4d52fc: 0x0  nop
    ctx->pc = 0x4d52fcu;
    // NOP
label_4d5300:
    // 0x4d5300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d5300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d5304: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4d5304u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4d5308: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d5308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d530c: 0x25ef1074  addiu       $t7, $t7, 0x1074
    ctx->pc = 0x4d530cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4212));
    // 0x4d5310: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d5310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d5314: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4d5314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d5318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d5318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d531c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4d531cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4d5320: 0x25081068  addiu       $t0, $t0, 0x1068
    ctx->pc = 0x4d5320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4200));
    // 0x4d5324: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4d5324u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4d5328: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x4d5328u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x7F1074u));
    // 0x4d532c: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4d532cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4d5330: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4d5330u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F1068u));
    // 0x4d5334: 0x256b106c  addiu       $t3, $t3, 0x106C
    ctx->pc = 0x4d5334u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4204));
    // 0x4d5338: 0x85c50012  lh          $a1, 0x12($t6)
    ctx->pc = 0x4d5338u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 18)));
    // 0x4d533c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4d533cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4d5340: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4d5340u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1068u));
    // 0x4d5344: 0x258c1070  addiu       $t4, $t4, 0x1070
    ctx->pc = 0x4d5344u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4208));
    // 0x4d5348: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4d5348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4d534c: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4d534cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F106Cu));
    // 0x4d5350: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4d5350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4d5354: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d5354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d5358: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d5358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d535c: 0x85660000  lh          $a2, 0x0($t3)
    ctx->pc = 0x4d535cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d5360: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4d5360u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4d5364: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d5364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d5368: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x4d5368u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d536c: 0x8dc20014  lw          $v0, 0x14($t6)
    ctx->pc = 0x4d536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
    // 0x4d5370: 0x25b00010  addiu       $s0, $t5, 0x10
    ctx->pc = 0x4d5370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x4d5374: 0x95070000  lhu         $a3, 0x0($t0)
    ctx->pc = 0x4d5374u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d5378: 0x25a80014  addiu       $t0, $t5, 0x14
    ctx->pc = 0x4d5378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 20));
    // 0x4d537c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4d537cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4d5380: 0x85890000  lh          $t1, 0x0($t4)
    ctx->pc = 0x4d5380u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d5384: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d5384u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d5388: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4d5388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d538c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4d538cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4d5390: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4d5390u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4d5394: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x4d5394u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x4d5398: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d539c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4d539cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4d53a0: 0x25a60018  addiu       $a2, $t5, 0x18
    ctx->pc = 0x4d53a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 24));
    // 0x4d53a4: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4d53a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x4d53a8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d53a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d53ac: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x4d53acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x4d53b0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4d53b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4d53b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d53b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d53b8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4d53b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4d53bc: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x4d53bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x4d53c0: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4d53c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x4d53c4: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4d53c4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4d53c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4d53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d53cc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4d53ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4d53d0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4d53d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4d53d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d53d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d53d8: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4d53d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d53dc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4d53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4d53e0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d53e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d53e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d53e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d53e8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4d53e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4d53ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d53ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d53f0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4d53f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4d53f4: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4d53f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4d53f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4d53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d53fc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d53fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d5400: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5404: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4d5404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4d5408: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d5408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d540c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4d540cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4d5410: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x4d5410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4d5414: 0x95a2015e  lhu         $v0, 0x15E($t5)
    ctx->pc = 0x4d5414u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 350)));
    // 0x4d5418: 0x946501c2  lhu         $a1, 0x1C2($v1)
    ctx->pc = 0x4d5418u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 450)));
    // 0x4d541c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d541cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d5420: 0xa5a501c2  sh          $a1, 0x1C2($t5)
    ctx->pc = 0x4d5420u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 450), (uint16_t)GPR_U32(ctx, 5));
    // 0x4d5424: 0x22c43  sra         $a1, $v0, 17
    ctx->pc = 0x4d5424u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4d5428: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x4d5428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4d542c: 0x94620148  lhu         $v0, 0x148($v1)
    ctx->pc = 0x4d542cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x4d5430: 0x10b10013  beq         $a1, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4D5430u;
    {
        const bool branch_taken_0x4d5430 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x4D5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5430u;
        // 0x4d5434: 0xa5a20148  sh          $v0, 0x148($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5430) {
            ctx->pc = 0x4D5480u;
            goto label_4d5480;
        }
    }
    ctx->pc = 0x4D5438u;
    // 0x4d5438: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x4d5438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d543c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D543Cu;
    {
        const bool branch_taken_0x4d543c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d543c) {
            ctx->pc = 0x4D5440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D543Cu;
            // 0x4d5440: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D5458u;
            goto label_4d5458;
        }
    }
    ctx->pc = 0x4D5444u;
    // 0x4d5444: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x4D5444u;
    {
        const bool branch_taken_0x4d5444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5444u;
        // 0x4d5448: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5444) {
            ctx->pc = 0x4D5470u;
            goto label_4d5470;
        }
    }
    ctx->pc = 0x4D544Cu;
    // 0x4d544c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4D544Cu;
    {
        const bool branch_taken_0x4d544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D544Cu;
        // 0x4d5450: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d544c) {
            ctx->pc = 0x4D54C0u;
            goto label_4d54c0;
        }
    }
    ctx->pc = 0x4D5454u;
    // 0x4d5454: 0x0  nop
    ctx->pc = 0x4d5454u;
    // NOP
label_4d5458:
    // 0x4d5458: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4D5458u;
    {
        const bool branch_taken_0x4d5458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5458u;
        // 0x4d545c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5458) {
            ctx->pc = 0x4D5498u;
            goto label_4d5498;
        }
    }
    ctx->pc = 0x4D5460u;
    // 0x4d5460: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4D5460u;
    {
        const bool branch_taken_0x4d5460 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D5464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5460u;
        // 0x4d5464: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5460) {
            ctx->pc = 0x4D54B0u;
            goto label_4d54b0;
        }
    }
    ctx->pc = 0x4D5468u;
    // 0x4d5468: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4D5468u;
    {
        const bool branch_taken_0x4d5468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5468u;
        // 0x4d546c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5468) {
            ctx->pc = 0x4D54C0u;
            goto label_4d54c0;
        }
    }
    ctx->pc = 0x4D5470u;
label_4d5470:
    // 0x4d5470: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d5470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d5474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d5478: 0x8135534  j           func_4D54D0
    ctx->pc = 0x4D5478u;
    ctx->pc = 0x4D547Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5478u;
    // 0x4d547c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D54D0u;
    goto label_4d54d0;
    ctx->pc = 0x4D5480u;
label_4d5480:
    // 0x4d5480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d5480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d5484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d5488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d548c: 0x813553c  j           func_4D54F0
    ctx->pc = 0x4D548Cu;
    ctx->pc = 0x4D5490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D548Cu;
    // 0x4d5490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D54F0u;
    goto label_4d54f0;
    ctx->pc = 0x4D5494u;
    // 0x4d5494: 0x0  nop
    ctx->pc = 0x4d5494u;
    // NOP
label_4d5498:
    // 0x4d5498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d5498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d549c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d549cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d54a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d54a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d54a4: 0x8135544  j           func_4D5510
    ctx->pc = 0x4D54A4u;
    ctx->pc = 0x4D54A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D54A4u;
    // 0x4d54a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5510u;
    goto label_4d5510;
    ctx->pc = 0x4D54ACu;
    // 0x4d54ac: 0x0  nop
    ctx->pc = 0x4d54acu;
    // NOP
label_4d54b0:
    // 0x4d54b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d54b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d54b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d54b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d54b8: 0x8135554  j           func_4D5550
    ctx->pc = 0x4D54B8u;
    ctx->pc = 0x4D54BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D54B8u;
    // 0x4d54bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5550u;
    goto label_4d5550;
    ctx->pc = 0x4D54C0u;
label_4d54c0:
    // 0x4d54c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d54c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d54c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D54C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D54C4u;
        // 0x4d54c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D54C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D54CCu;
    // 0x4d54cc: 0x0  nop
    ctx->pc = 0x4d54ccu;
    // NOP
label_4d54d0:
    // 0x4d54d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d54d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d54d4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d54d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d54d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d54dc: 0x8c451074  lw          $a1, 0x1074($v0)
    ctx->pc = 0x4d54dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1074u));
    // 0x4d54e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d54e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d54e4: 0x8126ee2  j           func_49BB88
    ctx->pc = 0x4D54E4u;
    ctx->pc = 0x4D54E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D54E4u;
    // 0x4d54e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    sub_0049BB88_0x49bb88(rdram, ctx, runtime); return;
    ctx->pc = 0x4D54ECu;
    // 0x4d54ec: 0x0  nop
    ctx->pc = 0x4d54ecu;
    // NOP
label_4d54f0:
    // 0x4d54f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d54f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d54f4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4d54f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d54f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d54fc: 0x8c451074  lw          $a1, 0x1074($v0)
    ctx->pc = 0x4d54fcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1074u));
    // 0x4d5500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d5500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5504: 0x8128228  j           func_4A08A0
    ctx->pc = 0x4D5504u;
    ctx->pc = 0x4D5508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5504u;
    // 0x4d5508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A08A0u;
    sub_004A08A0_0x4a08a0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D550Cu;
    // 0x4d550c: 0x0  nop
    ctx->pc = 0x4d550cu;
    // NOP
label_4d5510:
    // 0x4d5510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d5510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d5514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d5514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d5518: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4d5518u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4d551c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d5520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d5520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d5524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d5528: 0x26101074  addiu       $s0, $s0, 0x1074
    ctx->pc = 0x4d5528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4212));
    // 0x4d552c: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4D552Cu;
    SET_GPR_U32(ctx, 31, 0x4D5534u);
    ctx->pc = 0x4D5530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D552Cu;
    // 0x4d5530: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4D552Cu, 0x4D5534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5534u;
label_4d5534:
    // 0x4d5534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d5534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5538: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4d5538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d553c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d553cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d5540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d5544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d5548: 0x8128228  j           func_4A08A0
    ctx->pc = 0x4D5548u;
    ctx->pc = 0x4D554Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5548u;
    // 0x4d554c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A08A0u;
    sub_004A08A0_0x4a08a0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D5550u;
label_4d5550:
    // 0x4d5550: 0x3e00008  jr          $ra
    ctx->pc = 0x4D5550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D5550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D5558u;
}
