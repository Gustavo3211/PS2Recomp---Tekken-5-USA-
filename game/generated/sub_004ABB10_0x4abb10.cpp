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

// Function: sub_004ABB10
// Address: 0x4abb10 - 0x4abe80
void sub_004ABB10_0x4abb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ABB10_0x4abb10");
#endif

    switch (ctx->pc) {
        case 0x4abda8u: goto label_4abda8;
        case 0x4abdc0u: goto label_4abdc0;
        case 0x4abe08u: goto label_4abe08;
        case 0x4abe20u: goto label_4abe20;
        default: break;
    }

    ctx->pc = 0x4abb10u;

    // 0x4abb10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4abb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4abb14: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4abb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4abb18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4abb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4abb1c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4abb1cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4abb20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4abb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4abb24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4abb24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abb28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4abb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4abb2c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4abb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4abb30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4abb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4abb34: 0x24470ca4  addiu       $a3, $v0, 0xCA4
    ctx->pc = 0x4abb34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3236));
    // 0x4abb38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4abb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4abb3c: 0x24660ca8  addiu       $a2, $v1, 0xCA8
    ctx->pc = 0x4abb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 3240));
    // 0x4abb40: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4abb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4abb44: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4abb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4abb48: 0x24740cb0  addiu       $s4, $v1, 0xCB0
    ctx->pc = 0x4abb48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 3248));
    // 0x4abb4c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4abb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0CA4u));
    // 0x4abb50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4abb50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0CA8u));
    // 0x4abb54: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x4abb54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x4abb58: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4abb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4abb5c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4abb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4abb60: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4abb60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4abb64: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4abb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4abb68: 0x86620130  lh          $v0, 0x130($s3)
    ctx->pc = 0x4abb68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x4abb6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4abb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4abb70: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4abb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4abb74: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4abb74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4abb78: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4abb78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4abb7c: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4abb7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4abb80: 0x463000f  bgezl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4ABB80u;
    {
        const bool branch_taken_0x4abb80 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4abb80) {
            ctx->pc = 0x4ABB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABB80u;
            // 0x4abb84: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABBC0u;
            goto label_4abbc0;
        }
    }
    ctx->pc = 0x4ABB88u;
    // 0x4abb88: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4abb88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4abb8c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4abb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4abb90: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4abb90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4abb94: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4abb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4abb98: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4abb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4abb9c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4abb9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4abba0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4abba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4abba4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4abba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4abba8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4abba8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4abbac: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4abbacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4abbb0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4abbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4abbb4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4abbb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4abbb8: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4abbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4abbbc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4abbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4abbc0:
    // 0x4abbc0: 0x86630132  lh          $v1, 0x132($s3)
    ctx->pc = 0x4abbc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 306)));
    // 0x4abbc4: 0x24910cb4  addiu       $s1, $a0, 0xCB4
    ctx->pc = 0x4abbc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 3252));
    // 0x4abbc8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4abbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4abbcc: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4abbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4abbd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4abbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4abbd4: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x4abbd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4abbd8: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4abbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4abbdc: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4abbdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4abbe0: 0x4830010  bgezl       $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4ABBE0u;
    {
        const bool branch_taken_0x4abbe0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x4abbe0) {
            ctx->pc = 0x4ABBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABBE0u;
            // 0x4abbe4: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABC24u;
            goto label_4abc24;
        }
    }
    ctx->pc = 0x4ABBE8u;
    // 0x4abbe8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4abbe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4abbec: 0x42023  negu        $a0, $a0
    ctx->pc = 0x4abbecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x4abbf0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4abbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4abbf4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4abbf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4abbf8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4abbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4abbfc: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4abbfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4abc00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4abc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4abc04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4abc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4abc08: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4abc08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4abc0c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4abc0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4abc10: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4abc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4abc14: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4abc14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4abc18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4abc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4abc1c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4abc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4abc20: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4abc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4abc24:
    // 0x4abc24: 0x86630134  lh          $v1, 0x134($s3)
    ctx->pc = 0x4abc24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 308)));
    // 0x4abc28: 0x24900cb8  addiu       $s0, $a0, 0xCB8
    ctx->pc = 0x4abc28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3256));
    // 0x4abc2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4abc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4abc30: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4abc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4abc34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4abc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4abc38: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x4abc38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4abc3c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4abc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4abc40: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4abc40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4abc44: 0x481000f  bgez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x4ABC44u;
    {
        const bool branch_taken_0x4abc44 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4ABC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC44u;
        // 0x4abc48: 0x94e20000  lhu         $v0, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abc44) {
            ctx->pc = 0x4ABC84u;
            goto label_4abc84;
        }
    }
    ctx->pc = 0x4ABC4Cu;
    // 0x4abc4c: 0x42023  negu        $a0, $a0
    ctx->pc = 0x4abc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x4abc50: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4abc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4abc54: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4abc54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4abc58: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4abc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4abc5c: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4abc5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4abc60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4abc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4abc64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4abc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4abc68: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4abc68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4abc6c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4abc6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4abc70: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4abc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4abc74: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4abc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4abc78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4abc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4abc7c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4abc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4abc80: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4abc80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4abc84:
    // 0x4abc84: 0xa6620124  sh          $v0, 0x124($s3)
    ctx->pc = 0x4abc84u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 292), (uint16_t)GPR_U32(ctx, 2));
    // 0x4abc88: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4abc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4abc8c: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4abc8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4abc90: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4abc90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4abc94: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4abc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4abc98: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4abc98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4abc9c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4abc9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4abca0: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x4abca0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4abca4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4ABCA4u;
    {
        const bool branch_taken_0x4abca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABCA4u;
        // 0x4abca8: 0x96840000  lhu         $a0, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abca4) {
            ctx->pc = 0x4ABCE4u;
            goto label_4abce4;
        }
    }
    ctx->pc = 0x4ABCACu;
    // 0x4abcac: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4abcacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4abcb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4abcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4abcb4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4abcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4abcb8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4abcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4abcbc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4abcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4abcc0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4abcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4abcc4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4abcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4abcc8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4abcc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4abccc: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4abcccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4abcd0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4abcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4abcd4: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x4abcd4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4abcd8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4abcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4abcdc: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x4abcdcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4abce0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4abce0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4abce4:
    // 0x4abce4: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4abce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4abce8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4abce8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4abcec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4abcecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4abcf0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4abcf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4abcf4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4ABCF4u;
    {
        const bool branch_taken_0x4abcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABCF4u;
        // 0x4abcf8: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abcf4) {
            ctx->pc = 0x4ABD34u;
            goto label_4abd34;
        }
    }
    ctx->pc = 0x4ABCFCu;
    // 0x4abcfc: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4abcfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4abd00: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4abd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4abd04: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4abd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4abd08: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4abd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4abd0c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4abd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4abd10: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4abd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4abd14: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4abd14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4abd18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4abd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4abd1c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4abd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4abd20: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4abd20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4abd24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4abd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4abd28: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4abd28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4abd2c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4abd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4abd30: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4abd30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4abd34:
    // 0x4abd34: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x4abd34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4abd38: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x4abd38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4abd3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4abd3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4abd40: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4ABD40u;
    {
        const bool branch_taken_0x4abd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4abd40) {
            ctx->pc = 0x4ABD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABD40u;
            // 0x4abd44: 0x84c30000  lh          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABD80u;
            goto label_4abd80;
        }
    }
    ctx->pc = 0x4ABD48u;
    // 0x4abd48: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4abd48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4abd4c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4abd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4abd50: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4abd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4abd54: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4abd54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4abd58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4abd58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4abd5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4abd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4abd60: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4abd60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4abd64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4abd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4abd68: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4abd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4abd6c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4abd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4abd70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4abd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4abd74: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4abd74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4abd78: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4abd78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4abd7c: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4abd7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4abd80:
    // 0x4abd80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4abd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abd84: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4abd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4abd88: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x4abd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x4abd8c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4abd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4abd90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4abd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4abd94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4abd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4abd98: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4abd98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4abd9c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4abd9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4abda0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4ABDA0u;
    SET_GPR_U32(ctx, 31, 0x4ABDA8u);
    ctx->pc = 0x4ABDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABDA0u;
    // 0x4abda4: 0xa6630126  sh          $v1, 0x126($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 294), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4ABDA0u, 0x4ABDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABDA8u;
label_4abda8:
    // 0x4abda8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4abda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4abdac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4abdacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abdb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4abdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abdb4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4abdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4abdb8: 0xc13e4ca  jal         func_4F9328
    ctx->pc = 0x4ABDB8u;
    SET_GPR_U32(ctx, 31, 0x4ABDC0u);
    ctx->pc = 0x4ABDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABDB8u;
    // 0x4abdbc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9328u, 0x4ABDB8u, 0x4ABDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABDC0u;
label_4abdc0:
    // 0x4abdc0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4abdc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4abdc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4abdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abdc8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4abdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4abdcc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4abdccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4abdd0: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x4abdd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x4abdd4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4abdd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4abdd8: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4abdd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4abddc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4abddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4abde0: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4abde0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4abde4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4abde4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4abde8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4abde8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4abdec: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4abdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4abdf0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4abdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4abdf4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4abdf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4abdf8: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4abdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4abdfc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4abdfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4abe00: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4ABE00u;
    SET_GPR_U32(ctx, 31, 0x4ABE08u);
    ctx->pc = 0x4ABE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABE00u;
    // 0x4abe04: 0xa6620128  sh          $v0, 0x128($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 296), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4ABE00u, 0x4ABE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABE08u;
label_4abe08:
    // 0x4abe08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4abe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4abe0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4abe0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abe10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4abe10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abe14: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4abe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4abe18: 0xc13e4ca  jal         func_4F9328
    ctx->pc = 0x4ABE18u;
    SET_GPR_U32(ctx, 31, 0x4ABE20u);
    ctx->pc = 0x4ABE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABE18u;
    // 0x4abe1c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9328u, 0x4ABE18u, 0x4ABE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABE20u;
label_4abe20:
    // 0x4abe20: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4abe20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4abe24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4abe24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4abe28: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4abe28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4abe2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4abe2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4abe30: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x4abe30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x4abe34: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4abe34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4abe38: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4abe38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4abe3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4abe3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4abe40: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4abe40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4abe44: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4abe44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4abe48: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4abe48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4abe4c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4abe4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4abe50: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4abe50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4abe54: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4abe54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4abe58: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4abe58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4abe5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4abe5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4abe60: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4abe60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4abe64: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4abe64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4abe68: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4abe68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4abe6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4abe6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4abe70: 0xa662012a  sh          $v0, 0x12A($s3)
    ctx->pc = 0x4abe70u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 298), (uint16_t)GPR_U32(ctx, 2));
    // 0x4abe74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4abe74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4abe78: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABE78u;
        // 0x4abe7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABE80u;
}
