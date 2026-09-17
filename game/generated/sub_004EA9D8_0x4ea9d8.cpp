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

// Function: sub_004EA9D8
// Address: 0x4ea9d8 - 0x4eac58
void sub_004EA9D8_0x4ea9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA9D8_0x4ea9d8");
#endif

    switch (ctx->pc) {
        case 0x4eaa90u: goto label_4eaa90;
        case 0x4eaaa0u: goto label_4eaaa0;
        case 0x4eab40u: goto label_4eab40;
        case 0x4eab80u: goto label_4eab80;
        case 0x4eac18u: goto label_4eac18;
        default: break;
    }

    ctx->pc = 0x4ea9d8u;

    // 0x4ea9d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ea9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ea9dc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4ea9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4ea9e0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4ea9e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea9e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ea9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ea9e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ea9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ea9ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ea9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ea9f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ea9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ea9f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ea9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ea9f8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ea9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ea9fc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ea9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4eaa00: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4eaa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4eaa04: 0x96e20148  lhu         $v0, 0x148($s7)
    ctx->pc = 0x4eaa04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 328)));
    // 0x4eaa08: 0x2c42000c  sltiu       $v0, $v0, 0xC
    ctx->pc = 0x4eaa08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x4eaa0c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4EAA0Cu;
    {
        const bool branch_taken_0x4eaa0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eaa0c) {
            ctx->pc = 0x4EAA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EAA0Cu;
            // 0x4eaa10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EAA40u;
            goto label_4eaa40;
        }
    }
    ctx->pc = 0x4EAA14u;
    // 0x4eaa14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eaa14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eaa18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4eaa18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eaa1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4eaa1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eaa20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4eaa20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4eaa24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4eaa24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eaa28: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4eaa28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4eaa2c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4eaa2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4eaa30: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4eaa30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4eaa34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4eaa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4eaa38: 0x813ab16  j           func_4EAC58
    ctx->pc = 0x4EAA38u;
    ctx->pc = 0x4EAA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAA38u;
    // 0x4eaa3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAC58u;
    sub_004EAC58_0x4eac58(rdram, ctx, runtime); return;
    ctx->pc = 0x4EAA40u;
label_4eaa40:
    // 0x4eaa40: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x4eaa40u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
    // 0x4eaa44: 0x26d6d680  addiu       $s6, $s6, -0x2980
    ctx->pc = 0x4eaa44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x4eaa48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4eaa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4eaa4c: 0x24054300  addiu       $a1, $zero, 0x4300
    ctx->pc = 0x4eaa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17152));
    // 0x4eaa50: 0xa6e20160  sh          $v0, 0x160($s7)
    ctx->pc = 0x4eaa50u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eaa54: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x4eaa54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4eaa58: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x4eaa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4eaa5c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x4eaa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x4eaa60: 0xa6e30162  sh          $v1, 0x162($s7)
    ctx->pc = 0x4eaa60u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4eaa64: 0xa6e5013a  sh          $a1, 0x13A($s7)
    ctx->pc = 0x4eaa64u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 314), (uint16_t)GPR_U32(ctx, 5));
    // 0x4eaa68: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4eaa68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4eaa6c: 0xa6e40164  sh          $a0, 0x164($s7)
    ctx->pc = 0x4eaa6cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 356), (uint16_t)GPR_U32(ctx, 4));
    // 0x4eaa70: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4eaa70u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4eaa74: 0xa6f10168  sh          $s1, 0x168($s7)
    ctx->pc = 0x4eaa74u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 360), (uint16_t)GPR_U32(ctx, 17));
    // 0x4eaa78: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4eaa78u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4eaa7c: 0xa6c223c4  sh          $v0, 0x23C4($s6)
    ctx->pc = 0x4eaa7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x4eaa80: 0x267311fc  addiu       $s3, $s3, 0x11FC
    ctx->pc = 0x4eaa80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4604));
    // 0x4eaa84: 0x265211f4  addiu       $s2, $s2, 0x11F4
    ctx->pc = 0x4eaa84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4596));
    // 0x4eaa88: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4EAA88u;
    SET_GPR_U32(ctx, 31, 0x4EAA90u);
    ctx->pc = 0x4EAA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAA88u;
    // 0x4eaa8c: 0x269411f8  addiu       $s4, $s4, 0x11F8 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4EAA88u, 0x4EAA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAA90u;
label_4eaa90:
    // 0x4eaa90: 0xa6d1232c  sh          $s1, 0x232C($s6)
    ctx->pc = 0x4eaa90u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9004), (uint16_t)GPR_U32(ctx, 17));
    // 0x4eaa94: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4eaa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eaa98: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4EAA98u;
    SET_GPR_U32(ctx, 31, 0x4EAAA0u);
    ctx->pc = 0x4EAA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAA98u;
    // 0x4eaa9c: 0x3c10ffff  lui         $s0, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4EAA98u, 0x4EAAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAAA0u;
label_4eaaa0:
    // 0x4eaaa0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4eaaa0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
    // 0x4eaaa4: 0x250880e8  addiu       $t0, $t0, -0x7F18
    ctx->pc = 0x4eaaa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934760));
    // 0x4eaaa8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4eaaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eaaac: 0x8507000e  lh          $a3, 0xE($t0)
    ctx->pc = 0x4eaaacu;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x5480F6u));
    // 0x4eaab0: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4eaab0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4eaab4: 0x8503000a  lh          $v1, 0xA($t0)
    ctx->pc = 0x4eaab4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5480F2u));
    // 0x4eaab8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eaab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eaabc: 0x8502000c  lh          $v0, 0xC($t0)
    ctx->pc = 0x4eaabcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x5480F4u));
    // 0x4eaac0: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4eaac0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4eaac4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4eaac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4eaac8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4eaac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4eaacc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4eaaccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eaad0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4eaad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4eaad4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4eaad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4eaad8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4eaad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4eaadc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4eaadcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4eaae0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4eaae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4eaae4: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4eaae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4eaae8: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x4eaae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x4eaaec: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4eaaecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4eaaf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4eaaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eaaf4: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4eaaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4eaaf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4eaaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eaafc: 0x26b511e8  addiu       $s5, $s5, 0x11E8
    ctx->pc = 0x4eaafcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4584));
    // 0x4eab00: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4eab00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4eab04: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4eab04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4eab08: 0x263111ec  addiu       $s1, $s1, 0x11EC
    ctx->pc = 0x4eab08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4588));
    // 0x4eab0c: 0x86e20022  lh          $v0, 0x22($s7)
    ctx->pc = 0x4eab0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 34)));
    // 0x4eab10: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eab10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eab14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4eab14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4eab18: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4eab18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4eab1c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4eab1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4eab20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eab20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eab24: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4eab24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4eab28: 0x86e20024  lh          $v0, 0x24($s7)
    ctx->pc = 0x4eab28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x4eab2c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4eab2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4eab30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eab30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eab34: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4eab34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4eab38: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4EAB38u;
    SET_GPR_U32(ctx, 31, 0x4EAB40u);
    ctx->pc = 0x4EAB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAB38u;
    // 0x4eab3c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4EAB38u, 0x4EAB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAB40u;
label_4eab40:
    // 0x4eab40: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4eab40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4eab44: 0x86e20026  lh          $v0, 0x26($s7)
    ctx->pc = 0x4eab44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 38)));
    // 0x4eab48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4eab48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eab4c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eab4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eab50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4eab50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4eab54: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4eab54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4eab58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4eab58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eab5c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4eab5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4eab60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eab60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eab64: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4eab64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4eab68: 0x86e20028  lh          $v0, 0x28($s7)
    ctx->pc = 0x4eab68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 40)));
    // 0x4eab6c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4eab6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4eab70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eab70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eab74: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4eab74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4eab78: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4EAB78u;
    SET_GPR_U32(ctx, 31, 0x4EAB80u);
    ctx->pc = 0x4EAB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAB78u;
    // 0x4eab7c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4EAB78u, 0x4EAB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAB80u;
label_4eab80:
    // 0x4eab80: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4eab80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eab84: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x4eab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x4eab88: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4eab88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eab8c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4eab8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eab90: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4eab90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4eab94: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4eab94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4eab98: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x4eab98u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4eab9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eab9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4eaba0: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4eaba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4eaba4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4eaba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4eaba8: 0x86690000  lh          $t1, 0x0($s3)
    ctx->pc = 0x4eaba8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eabac: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4eabacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4eabb0: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4eabb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eabb4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4eabb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4eabb8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eabb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eabbc: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4eabbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4eabc0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4eabc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4eabc4: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x4eabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x4eabc8: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x4eabc8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eabcc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4eabccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4eabd0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eabd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4eabd4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4eabd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4eabd8: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4eabd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4eabdc: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4eabdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4eabe0: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4eabe0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4eabe4: 0x8ee20018  lw          $v0, 0x18($s7)
    ctx->pc = 0x4eabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x4eabe8: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4eabe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4eabec: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4eabecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4eabf0: 0xa6c52334  sh          $a1, 0x2334($s6)
    ctx->pc = 0x4eabf0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9012), (uint16_t)GPR_U32(ctx, 5));
    // 0x4eabf4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eabf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4eabf8: 0xa6c32336  sh          $v1, 0x2336($s6)
    ctx->pc = 0x4eabf8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4eabfc: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4eabfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4eac00: 0x1304825  or          $t1, $t1, $s0
    ctx->pc = 0x4eac00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 16));
    // 0x4eac04: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4eac04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x4eac08: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4eac08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4eac0c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4eac0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eac10: 0xc13d6c2  jal         func_4F5B08
    ctx->pc = 0x4EAC10u;
    SET_GPR_U32(ctx, 31, 0x4EAC18u);
    ctx->pc = 0x4EAC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAC10u;
    // 0x4eac14: 0xa6c22338  sh          $v0, 0x2338($s6) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 22), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5B08u, 0x4EAC10u, 0x4EAC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAC18u;
label_4eac18:
    // 0x4eac18: 0x26e301bc  addiu       $v1, $s7, 0x1BC
    ctx->pc = 0x4eac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 444));
    // 0x4eac1c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4eac1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4eac20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4eac20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eac24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eac24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eac28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4eac28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eac2c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4eac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4eac30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4eac30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eac34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4eac34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4eac38: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4eac38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eac3c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4eac3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4eac40: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4eac40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4eac44: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4eac44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4eac48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4eac48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4eac4c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4eac4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eac50: 0x813ab16  j           func_4EAC58
    ctx->pc = 0x4EAC50u;
    ctx->pc = 0x4EAC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAC50u;
    // 0x4eac54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAC58u;
    sub_004EAC58_0x4eac58(rdram, ctx, runtime); return;
    ctx->pc = 0x4EAC58u;
}
