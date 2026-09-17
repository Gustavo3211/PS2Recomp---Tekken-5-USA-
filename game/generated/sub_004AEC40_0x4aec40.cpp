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

// Function: sub_004AEC40
// Address: 0x4aec40 - 0x4af248
void sub_004AEC40_0x4aec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEC40_0x4aec40");
#endif

    switch (ctx->pc) {
        case 0x4aec8cu: goto label_4aec8c;
        case 0x4aed5cu: goto label_4aed5c;
        case 0x4aefa4u: goto label_4aefa4;
        case 0x4aefb8u: goto label_4aefb8;
        case 0x4aefc8u: goto label_4aefc8;
        case 0x4aefdcu: goto label_4aefdc;
        default: break;
    }

    ctx->pc = 0x4aec40u;

    // 0x4aec40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4aec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4aec44: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4aec44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4aec48: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4aec48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4aec4c: 0x24550d0c  addiu       $s5, $v0, 0xD0C
    ctx->pc = 0x4aec4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3340));
    // 0x4aec50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aec50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aec54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aec54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aec58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aec58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aec5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aec5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aec60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4aec60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4aec64: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4aec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4aec68: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4aec68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4aec6c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4aec6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4aec70: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4aec70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4aec74: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x4aec74u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x7F0D0Cu));
    // 0x4aec78: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x4aec78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x4aec7c: 0x4400076  bltz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x4AEC7Cu;
    {
        const bool branch_taken_0x4aec7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AEC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEC7Cu;
        // 0x4aec80: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aec7c) {
            ctx->pc = 0x4AEE58u;
            goto label_4aee58;
        }
    }
    ctx->pc = 0x4AEC84u;
    // 0x4aec84: 0xc12b600  jal         func_4AD800
    ctx->pc = 0x4AEC84u;
    SET_GPR_U32(ctx, 31, 0x4AEC8Cu);
    ctx->pc = 0x4AEC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEC84u;
    // 0x4aec88: 0x3c10ffff  lui         $s0, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD800u, 0x4AEC84u, 0x4AEC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEC8Cu;
label_4aec8c:
    // 0x4aec8c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4aec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4aec90: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4aec90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aec94: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4aec94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4aec98: 0x24840d10  addiu       $a0, $a0, 0xD10
    ctx->pc = 0x4aec98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3344));
    // 0x4aec9c: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x4aec9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4aeca0: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4aeca0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4aeca4: 0x26310d1c  addiu       $s1, $s1, 0xD1C
    ctx->pc = 0x4aeca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3356));
    // 0x4aeca8: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4aeca8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4aecac: 0xa6830008  sh          $v1, 0x8($s4)
    ctx->pc = 0x4aecacu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4aecb0: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4aecb0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4aecb4: 0x26730d20  addiu       $s3, $s3, 0xD20
    ctx->pc = 0x4aecb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3360));
    // 0x4aecb8: 0x26520d24  addiu       $s2, $s2, 0xD24
    ctx->pc = 0x4aecb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3364));
    // 0x4aecbc: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4aecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4aecc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4aecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D10u));
    // 0x4aecc4: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x4aecc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4aecc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aecc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aeccc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4aecccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4aecd0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aecd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aecd4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4aecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4aecd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aecd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aecdc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4aecdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4aece0: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4aece0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x4aece4: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4aece4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4aece8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aece8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aecec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4aececu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4aecf0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4aecf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4aecf4: 0xa68201b6  sh          $v0, 0x1B6($s4)
    ctx->pc = 0x4aecf4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 438), (uint16_t)GPR_U32(ctx, 2));
    // 0x4aecf8: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4aecf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4aecfc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4aecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4aed00: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x4aed00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x4aed04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aed04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aed08: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4aed08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4aed0c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4aed0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4aed10: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4aed10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4aed14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aed14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aed18: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4aed18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4aed1c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4aed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4aed20: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4aed20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4aed24: 0x84c20008  lh          $v0, 0x8($a2)
    ctx->pc = 0x4aed24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4aed28: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4aed28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4aed2c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4aed2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4aed30: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4aed30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4aed34: 0x84c2000a  lh          $v0, 0xA($a2)
    ctx->pc = 0x4aed34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x4aed38: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4aed38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4aed3c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4aed3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4aed40: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4aed40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4aed44: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x4aed44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4aed48: 0xa68201b8  sh          $v0, 0x1B8($s4)
    ctx->pc = 0x4aed48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 440), (uint16_t)GPR_U32(ctx, 2));
    // 0x4aed4c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4aed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4aed50: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x4aed50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x4aed54: 0xc12ba5a  jal         func_4AE968
    ctx->pc = 0x4AED54u;
    SET_GPR_U32(ctx, 31, 0x4AED5Cu);
    ctx->pc = 0x4AED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AED54u;
    // 0x4aed58: 0xa68201be  sh          $v0, 0x1BE($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 446), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE968u, 0x4AED54u, 0x4AED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AED5Cu;
label_4aed5c:
    // 0x4aed5c: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x4aed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4aed60: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4aed60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4aed64: 0x26850014  addiu       $a1, $s4, 0x14
    ctx->pc = 0x4aed64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x4aed68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4aed68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4aed6c: 0x26860018  addiu       $a2, $s4, 0x18
    ctx->pc = 0x4aed6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x4aed70: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4aed70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4aed74: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4aed74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4aed78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4aed78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4aed7c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4aed7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4aed80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aed80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aed84: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4aed84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4aed88: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4aed88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4aed8c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4aed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4aed90: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4aed90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4aed94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4aed94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4aed98: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4aed98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4aed9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aed9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aeda0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4aeda0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4aeda4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4aeda4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4aeda8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4aeda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4aedac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4aedacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4aedb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4aedb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4aedb4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4aedb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4aedb8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aedb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aedbc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4aedbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4aedc0: 0x8ce80d08  lw          $t0, 0xD08($a3)
    ctx->pc = 0x4aedc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3336)));
    // 0x4aedc4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4aedc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4aedc8: 0x8d020050  lw          $v0, 0x50($t0)
    ctx->pc = 0x4aedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x4aedcc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4aedccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4aedd0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4aedd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4aedd4: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x4aedd4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4aedd8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4aedd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4aeddc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4aeddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4aede0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4aede0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4aede4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4aede4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4aede8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4aede8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4aedec: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x4aedecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4aedf0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4aedf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4aedf4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4aedf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4aedf8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4aedf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4aedfc: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x4aedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x4aee00: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4aee00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4aee04: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4aee04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4aee08: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x4aee08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4aee0c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4aee0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4aee10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aee10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aee14: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4aee14u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4aee18: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4aee18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x4aee1c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4aee1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4aee20: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4aee20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4aee24: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x4aee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x4aee28: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4aee28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4aee2c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4aee2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4aee30: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4aee30u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4aee34: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4aee34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4aee38: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4aee38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4aee3c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4aee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4aee40: 0xa6840130  sh          $a0, 0x130($s4)
    ctx->pc = 0x4aee40u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 304), (uint16_t)GPR_U32(ctx, 4));
    // 0x4aee44: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4aee44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4aee48: 0xa6820132  sh          $v0, 0x132($s4)
    ctx->pc = 0x4aee48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x4aee4c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4aee4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4aee50: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x4AEE50u;
    {
        const bool branch_taken_0x4aee50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEE50u;
        // 0x4aee54: 0xa6830134  sh          $v1, 0x134($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 308), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aee50) {
            ctx->pc = 0x4AF218u;
            goto label_4af218;
        }
    }
    ctx->pc = 0x4AEE58u;
label_4aee58:
    // 0x4aee58: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4aee58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4aee5c: 0x246d0d14  addiu       $t5, $v1, 0xD14
    ctx->pc = 0x4aee5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 3348));
    // 0x4aee60: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4aee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4aee64: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x4aee64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4aee68: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4aee68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4aee6c: 0x25040d28  addiu       $a0, $t0, 0xD28
    ctx->pc = 0x4aee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 3368));
    // 0x4aee70: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4aee70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4aee74: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4aee74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4aee78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4aee78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D28u));
    // 0x4aee7c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4aee7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4aee80: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4aee80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4aee84: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4aee84u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4aee88: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4aee88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4aee8c: 0x244f0d1c  addiu       $t7, $v0, 0xD1C
    ctx->pc = 0x4aee8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 3356));
    // 0x4aee90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aee90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aee94: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x4aee94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4aee98: 0x25130d20  addiu       $s3, $t0, 0xD20
    ctx->pc = 0x4aee98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), 3360));
    // 0x4aee9c: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x4aee9cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0D1Cu));
    // 0x4aeea0: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4aeea0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4aeea4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4aeea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4aeea8: 0x8e6b0000  lw          $t3, 0x0($s3)
    ctx->pc = 0x4aeea8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4aeeac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aeeacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aeeb0: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4aeeb0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4aeeb4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4aeeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4aeeb8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aeeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aeebc: 0x26f10d2c  addiu       $s1, $s7, 0xD2C
    ctx->pc = 0x4aeebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 3372));
    // 0x4aeec0: 0x27d00d24  addiu       $s0, $fp, 0xD24
    ctx->pc = 0x4aeec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 3364));
    // 0x4aeec4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4aeec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4aeec8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4aeec8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4aeecc: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x4aeeccu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x7F0D2Cu));
    // 0x4aeed0: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4aeed0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4aeed4: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4aeed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x4aeed8: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x4aeed8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aeedc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4aeedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4aeee0: 0x26cc0d18  addiu       $t4, $s6, 0xD18
    ctx->pc = 0x4aeee0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 22), 3352));
    // 0x4aeee4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aeee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aeee8: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4aeee8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4aeeec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4aeeecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4aeef0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4aeef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4aeef4: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x4aeef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x4aeef8: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4aeef8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4aeefc: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x4aeefcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x4aef00: 0x26ae0d10  addiu       $t6, $s5, 0xD10
    ctx->pc = 0x4aef00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 21), 3344));
    // 0x4aef04: 0x8c92230c  lw          $s2, 0x230C($a0)
    ctx->pc = 0x4aef04u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x72F98Cu));
    // 0x4aef08: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4aef08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4aef0c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4aef0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4aef10: 0x8d890000  lw          $t1, 0x0($t4)
    ctx->pc = 0x4aef10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4aef14: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4aef14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4aef18: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4aef18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4aef1c: 0xade70000  sw          $a3, 0x0($t7)
    ctx->pc = 0x4aef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 7));
    // 0x4aef20: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4aef20u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4aef24: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4aef24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4aef28: 0x86820008  lh          $v0, 0x8($s4)
    ctx->pc = 0x4aef28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4aef2c: 0x8dc70000  lw          $a3, 0x0($t6)
    ctx->pc = 0x4aef2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4aef30: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4aef30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4aef34: 0x8c8f2310  lw          $t7, 0x2310($a0)
    ctx->pc = 0x4aef34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8976)));
    // 0x4aef38: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x4aef38u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x4aef3c: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x4aef3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4aef40: 0xae6b0000  sw          $t3, 0x0($s3)
    ctx->pc = 0x4aef40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 11));
    // 0x4aef44: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x4aef44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x4aef48: 0x8682000a  lh          $v0, 0xA($s4)
    ctx->pc = 0x4aef48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x4aef4c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4aef4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4aef50: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4aef50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4aef54: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x4aef54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x4aef58: 0x8682000c  lh          $v0, 0xC($s4)
    ctx->pc = 0x4aef58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x4aef5c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4aef5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4aef60: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x4aef60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x4aef64: 0xae2a0000  sw          $t2, 0x0($s1)
    ctx->pc = 0x4aef64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
    // 0x4aef68: 0x8682000e  lh          $v0, 0xE($s4)
    ctx->pc = 0x4aef68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x4aef6c: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4aef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4aef70: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4aef70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4aef74: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4aef74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4aef78: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x4aef78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4aef7c: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x4aef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x4aef80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4aef80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4aef84: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4aef84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4aef88: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4aef88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4aef8c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x4aef8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4aef90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4aef90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4aef94: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x4aef94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x4aef98: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4aef98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4aef9c: 0xc12ba5a  jal         func_4AE968
    ctx->pc = 0x4AEF9Cu;
    SET_GPR_U32(ctx, 31, 0x4AEFA4u);
    ctx->pc = 0x4AEFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEF9Cu;
    // 0x4aefa0: 0xadc70000  sw          $a3, 0x0($t6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE968u, 0x4AEF9Cu, 0x4AEFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEFA4u;
label_4aefa4:
    // 0x4aefa4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4aefa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4aefa8: 0x442009c  bltzl       $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x4AEFA8u;
    {
        const bool branch_taken_0x4aefa8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4aefa8) {
            ctx->pc = 0x4AEFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AEFA8u;
            // 0x4aefac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF21Cu;
            goto label_4af21c;
        }
    }
    ctx->pc = 0x4AEFB0u;
    // 0x4aefb0: 0xc12b600  jal         func_4AD800
    ctx->pc = 0x4AEFB0u;
    SET_GPR_U32(ctx, 31, 0x4AEFB8u);
    ctx->pc = 0x4AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD800u, 0x4AEFB0u, 0x4AEFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEFB8u;
label_4aefb8:
    // 0x4aefb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4aefb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aefbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4AEFBCu;
    {
        const bool branch_taken_0x4aefbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEFBCu;
        // 0x4aefc0: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aefbc) {
            ctx->pc = 0x4AEFE0u;
            goto label_4aefe0;
        }
    }
    ctx->pc = 0x4AEFC4u;
    // 0x4aefc4: 0x0  nop
    ctx->pc = 0x4aefc4u;
    // NOP
label_4aefc8:
    // 0x4aefc8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4aefc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4aefcc: 0x4400093  bltz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x4AEFCCu;
    {
        const bool branch_taken_0x4aefcc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AEFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEFCCu;
        // 0x4aefd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aefcc) {
            ctx->pc = 0x4AF21Cu;
            goto label_4af21c;
        }
    }
    ctx->pc = 0x4AEFD4u;
    // 0x4aefd4: 0xc12b600  jal         func_4AD800
    ctx->pc = 0x4AEFD4u;
    SET_GPR_U32(ctx, 31, 0x4AEFDCu);
    ctx->pc = 0x4AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD800u, 0x4AEFD4u, 0x4AEFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEFDCu;
label_4aefdc:
    // 0x4aefdc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4aefdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4aefe0:
    // 0x4aefe0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4aefe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4aefe4: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4aefe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4aefe8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4aefe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4aefec: 0x26aa0d10  addiu       $t2, $s5, 0xD10
    ctx->pc = 0x4aefecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 3344));
    // 0x4aeff0: 0xa6820008  sh          $v0, 0x8($s4)
    ctx->pc = 0x4aeff0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4aeff4: 0x246d0d28  addiu       $t5, $v1, 0xD28
    ctx->pc = 0x4aeff4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 3368));
    // 0x4aeff8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4aeff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4aeffc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4aeffcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4af000: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4af000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4af004: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4af004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4af008: 0x248b0d14  addiu       $t3, $a0, 0xD14
    ctx->pc = 0x4af008u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 3348));
    // 0x4af00c: 0x26cc0d18  addiu       $t4, $s6, 0xD18
    ctx->pc = 0x4af00cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 22), 3352));
    // 0x4af010: 0xa68201be  sh          $v0, 0x1BE($s4)
    ctx->pc = 0x4af010u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 446), (uint16_t)GPR_U32(ctx, 2));
    // 0x4af014: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4af014u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4af018: 0x268e0010  addiu       $t6, $s4, 0x10
    ctx->pc = 0x4af018u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4af01c: 0x268f0014  addiu       $t7, $s4, 0x14
    ctx->pc = 0x4af01cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x4af020: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4af020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0D28u));
    // 0x4af024: 0x26900018  addiu       $s0, $s4, 0x18
    ctx->pc = 0x4af024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x4af028: 0xa68201b6  sh          $v0, 0x1B6($s4)
    ctx->pc = 0x4af028u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 438), (uint16_t)GPR_U32(ctx, 2));
    // 0x4af02c: 0x96e30d2c  lhu         $v1, 0xD2C($s7)
    ctx->pc = 0x4af02cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 3372)));
    // 0x4af030: 0xa68301b8  sh          $v1, 0x1B8($s4)
    ctx->pc = 0x4af030u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 440), (uint16_t)GPR_U32(ctx, 3));
    // 0x4af034: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x4af034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4af038: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4af038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4af03c: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x4af03cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x4af040: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4af040u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D14u));
    // 0x4af044: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4af044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4af048: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4af048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4af04c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4af04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4af050: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4af050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4af054: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4af054u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4af058: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4af058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4af05c: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x4af05cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x4af060: 0x95440000  lhu         $a0, 0x0($t2)
    ctx->pc = 0x4af060u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4af064: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4af064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4af068: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4af068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4af06c: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4af06cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4af070: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x4af070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4af074: 0x26520006  addiu       $s2, $s2, 0x6
    ctx->pc = 0x4af074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x4af078: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4af078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4af07c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4af07cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4af080: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4af080u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4af084: 0xa684011a  sh          $a0, 0x11A($s4)
    ctx->pc = 0x4af084u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 282), (uint16_t)GPR_U32(ctx, 4));
    // 0x4af088: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4af088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4af08c: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4af08cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4af090: 0xa682011e  sh          $v0, 0x11E($s4)
    ctx->pc = 0x4af090u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 286), (uint16_t)GPR_U32(ctx, 2));
    // 0x4af094: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4af094u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4af098: 0xa6830122  sh          $v1, 0x122($s4)
    ctx->pc = 0x4af098u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x4af09c: 0x85020d1c  lh          $v0, 0xD1C($t0)
    ctx->pc = 0x4af09cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 3356)));
    // 0x4af0a0: 0x84830d20  lh          $v1, 0xD20($a0)
    ctx->pc = 0x4af0a0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F0D20u));
    // 0x4af0a4: 0x85460000  lh          $a2, 0x0($t2)
    ctx->pc = 0x4af0a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4af0a8: 0x85670000  lh          $a3, 0x0($t3)
    ctx->pc = 0x4af0a8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4af0ac: 0x87c80d24  lh          $t0, 0xD24($fp)
    ctx->pc = 0x4af0acu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 3364)));
    // 0x4af0b0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4af0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4af0b4: 0x85850000  lh          $a1, 0x0($t4)
    ctx->pc = 0x4af0b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4af0b8: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4af0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4af0bc: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4af0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4af0c0: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4af0c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4af0c4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4af0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4af0c8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x4af0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x4af0cc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4af0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4af0d0: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x4af0d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x4af0d4: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4af0d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4af0d8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4af0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4af0dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4af0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4af0e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4af0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4af0e4: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4af0e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4af0e8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4af0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4af0ec: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4af0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4af0f0: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4af0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4af0f4: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4af0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4af0f8: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4af0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4af0fc: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4af0fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4af100: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4af100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4af104: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4af104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4af108: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4af108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4af10c: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4af10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4af110: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4af110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4af114: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4af114u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4af118: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4af118u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4af11c: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x4af11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4af120: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4af120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4af124: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4af124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4af128: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4af128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4af12c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4af12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4af130: 0xade30000  sw          $v1, 0x0($t7)
    ctx->pc = 0x4af130u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
    // 0x4af134: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4af134u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4af138: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4af138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af13c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4af13cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4af140: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4af140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4af144: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4af144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4af148: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4af148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4af14c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4af14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4af150: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4af150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4af154: 0x8c480d08  lw          $t0, 0xD08($v0)
    ctx->pc = 0x4af154u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0D08u));
    // 0x4af158: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4af158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4af15c: 0x8d020050  lw          $v0, 0x50($t0)
    ctx->pc = 0x4af15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x4af160: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4af160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4af164: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4af164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4af168: 0x85660000  lh          $a2, 0x0($t3)
    ctx->pc = 0x4af168u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4af16c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4af16cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4af170: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4af170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4af174: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4af174u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4af178: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4af178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4af17c: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4af17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4af180: 0x85870000  lh          $a3, 0x0($t4)
    ctx->pc = 0x4af180u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4af184: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4af184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4af188: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4af188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4af18c: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4af18cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4af190: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x4af190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x4af194: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4af194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4af198: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4af198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4af19c: 0x95440000  lhu         $a0, 0x0($t2)
    ctx->pc = 0x4af19cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4af1a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4af1a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4af1a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4af1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4af1a8: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4af1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4af1ac: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4af1acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4af1b0: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4af1b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4af1b4: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x4af1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x4af1b8: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x4af1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x4af1bc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4af1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4af1c0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4af1c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4af1c4: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4af1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4af1c8: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x4af1c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x4af1cc: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4af1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4af1d0: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4af1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4af1d4: 0xa6840130  sh          $a0, 0x130($s4)
    ctx->pc = 0x4af1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 304), (uint16_t)GPR_U32(ctx, 4));
    // 0x4af1d8: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4af1d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4af1dc: 0xa6820132  sh          $v0, 0x132($s4)
    ctx->pc = 0x4af1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x4af1e0: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4af1e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4af1e4: 0xae930140  sw          $s3, 0x140($s4)
    ctx->pc = 0x4af1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 19));
    // 0x4af1e8: 0xa6830134  sh          $v1, 0x134($s4)
    ctx->pc = 0x4af1e8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 308), (uint16_t)GPR_U32(ctx, 3));
    // 0x4af1ec: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4af1ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4af1f0: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4af1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4af1f4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4af1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x4af1f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4af1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4af1fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4af1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4af200: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4af200u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4af204: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4af204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4af208: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4af208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4af20c: 0x1000ff6e  b           . + 4 + (-0x92 << 2)
    ctx->pc = 0x4AF20Cu;
    {
        const bool branch_taken_0x4af20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF20Cu;
        // 0x4af210: 0xada30000  sw          $v1, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af20c) {
            ctx->pc = 0x4AEFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aefc8;
        }
    }
    ctx->pc = 0x4AF214u;
    // 0x4af214: 0x0  nop
    ctx->pc = 0x4af214u;
    // NOP
label_4af218:
    // 0x4af218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4af218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4af21c:
    // 0x4af21c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4af21cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4af220: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4af220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af224: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4af224u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4af228: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4af228u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af22c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4af22cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4af230: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4af230u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4af234: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4af234u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4af238: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4af238u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4af23c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4af23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4af240: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF240u;
        // 0x4af244: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF248u;
}
