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

// Function: sub_004EEA80
// Address: 0x4eea80 - 0x4eed80
void sub_004EEA80_0x4eea80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EEA80_0x4eea80");
#endif

    switch (ctx->pc) {
        case 0x4eeab4u: goto label_4eeab4;
        case 0x4eead0u: goto label_4eead0;
        case 0x4eeb9cu: goto label_4eeb9c;
        case 0x4eebacu: goto label_4eebac;
        case 0x4eebf0u: goto label_4eebf0;
        case 0x4eebf8u: goto label_4eebf8;
        default: break;
    }

    ctx->pc = 0x4eea80u;

    // 0x4eea80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4eea80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4eea84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4eea84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4eea88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4eea88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4eea8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4eea8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eea90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4eea90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4eea94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4eea94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4eea98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4eea98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4eea9c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4eea9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4eeaa0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4eeaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4eeaa4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4eeaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4eeaa8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4eeaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4eeaac: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4EEAACu;
    SET_GPR_U32(ctx, 31, 0x4EEAB4u);
    ctx->pc = 0x4EEAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEAACu;
    // 0x4eeab0: 0x265001b4  addiu       $s0, $s2, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4EEAACu, 0x4EEAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EEAB4u;
label_4eeab4:
    // 0x4eeab4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4eeab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4eeab8: 0xac62120c  sw          $v0, 0x120C($v1)
    ctx->pc = 0x4eeab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F120Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F120Cu, _value); } while (0);
    // 0x4eeabc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4eeabcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eeac0: 0x4420012  bltzl       $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4EEAC0u;
    {
        const bool branch_taken_0x4eeac0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4eeac0) {
            ctx->pc = 0x4EEAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EEAC0u;
            // 0x4eeac4: 0x26530166  addiu       $s3, $s2, 0x166 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 358));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EEB0Cu;
            goto label_4eeb0c;
        }
    }
    ctx->pc = 0x4EEAC8u;
    // 0x4eeac8: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4EEAC8u;
    SET_GPR_U32(ctx, 31, 0x4EEAD0u);
    ctx->pc = 0x4EEACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEAC8u;
    // 0x4eeacc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4EEAC8u, 0x4EEAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EEAD0u;
label_4eead0:
    // 0x4eead0: 0xa640015e  sh          $zero, 0x15E($s2)
    ctx->pc = 0x4eead0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4eead4: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x4eead4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x4eead8: 0x96430016  lhu         $v1, 0x16($s2)
    ctx->pc = 0x4eead8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x4eeadc: 0x9644001a  lhu         $a0, 0x1A($s2)
    ctx->pc = 0x4eeadcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x4eeae0: 0xa642011a  sh          $v0, 0x11A($s2)
    ctx->pc = 0x4eeae0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 282), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eeae4: 0xa643011e  sh          $v1, 0x11E($s2)
    ctx->pc = 0x4eeae4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 286), (uint16_t)GPR_U32(ctx, 3));
    // 0x4eeae8: 0xa6440122  sh          $a0, 0x122($s2)
    ctx->pc = 0x4eeae8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 290), (uint16_t)GPR_U32(ctx, 4));
    // 0x4eeaec: 0xa6400118  sh          $zero, 0x118($s2)
    ctx->pc = 0x4eeaecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4eeaf0: 0xa640011c  sh          $zero, 0x11C($s2)
    ctx->pc = 0x4eeaf0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4eeaf4: 0xa6400120  sh          $zero, 0x120($s2)
    ctx->pc = 0x4eeaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4eeaf8: 0xa64001b6  sh          $zero, 0x1B6($s2)
    ctx->pc = 0x4eeaf8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4eeafc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4eeafcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eeb00: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4eeb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4eeb04: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4eeb04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eeb08: 0x26530166  addiu       $s3, $s2, 0x166
    ctx->pc = 0x4eeb08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 358));
label_4eeb0c:
    // 0x4eeb0c: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4eeb0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eeb10: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4EEB10u;
    {
        const bool branch_taken_0x4eeb10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4EEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EEB10u;
        // 0x4eeb14: 0x3c17007f  lui         $s7, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eeb10) {
            ctx->pc = 0x4EEB48u;
            goto label_4eeb48;
        }
    }
    ctx->pc = 0x4EEB18u;
    // 0x4eeb18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4eeb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eeb1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4eeb1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eeb20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eeb20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eeb24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4eeb24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eeb28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4eeb28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4eeb2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4eeb2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eeb30: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4eeb30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4eeb34: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4eeb34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4eeb38: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4eeb38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4eeb3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4eeb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4eeb40: 0x813bcb2  j           func_4EF2C8
    ctx->pc = 0x4EEB40u;
    ctx->pc = 0x4EEB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEB40u;
    // 0x4eeb44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    sub_004EF2C8_0x4ef2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EEB48u;
label_4eeb48:
    // 0x4eeb48: 0x26550164  addiu       $s5, $s2, 0x164
    ctx->pc = 0x4eeb48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 356));
    // 0x4eeb4c: 0x26f011e8  addiu       $s0, $s7, 0x11E8
    ctx->pc = 0x4eeb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4584));
    // 0x4eeb50: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4eeb50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4eeb54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4eeb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eeb58: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4eeb58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4eeb5c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eeb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eeb60: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4eeb60u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4eeb64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eeb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eeb68: 0x26d411ec  addiu       $s4, $s6, 0x11EC
    ctx->pc = 0x4eeb68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4588));
    // 0x4eeb6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eeb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eeb70: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eeb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eeb74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eeb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eeb78: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4eeb78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eeb7c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4eeb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x4eeb80: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eeb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eeb84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eeb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eeb88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eeb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eeb8c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4eeb8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eeb90: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x4eeb90u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eeb94: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4EEB94u;
    SET_GPR_U32(ctx, 31, 0x4EEB9Cu);
    ctx->pc = 0x4EEB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEB94u;
    // 0x4eeb98: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4EEB94u, 0x4EEB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EEB9Cu;
label_4eeb9c:
    // 0x4eeb9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eeb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eeba0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4eeba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4eeba4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4EEBA4u;
    SET_GPR_U32(ctx, 31, 0x4EEBACu);
    ctx->pc = 0x4EEBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEBA4u;
    // 0x4eeba8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4EEBA4u, 0x4EEBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EEBACu;
label_4eebac:
    // 0x4eebac: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4eebacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eebb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eebb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eebb4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x4eebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x4eebb8: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x4eebb8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eebbc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4eebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4eebc0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eebc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4eebc4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4eebc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eebc8: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x4eebc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4eebcc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4eebccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4eebd0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eebd4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4eebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4eebd8: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4eebd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eebdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eebe0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x4eebe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4eebe4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4eebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4eebe8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4EEBE8u;
    SET_GPR_U32(ctx, 31, 0x4EEBF0u);
    ctx->pc = 0x4EEBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEBE8u;
    // 0x4eebec: 0xae850000  sw          $a1, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4EEBE8u, 0x4EEBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EEBF0u;
label_4eebf0:
    // 0x4eebf0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4EEBF0u;
    SET_GPR_U32(ctx, 31, 0x4EEBF8u);
    ctx->pc = 0x4EEBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEBF0u;
    // 0x4eebf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4EEBF0u, 0x4EEBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EEBF8u;
label_4eebf8:
    // 0x4eebf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4eebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eebfc: 0x8646011a  lh          $a2, 0x11A($s2)
    ctx->pc = 0x4eebfcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 282)));
    // 0x4eec00: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x4eec00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x4eec04: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4eec04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eec08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eec08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eec0c: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x4eec0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4eec10: 0x26480018  addiu       $t0, $s2, 0x18
    ctx->pc = 0x4eec10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x4eec14: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4eec14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4eec18: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4eec18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4eec1c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eec1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eec20: 0x2649015e  addiu       $t1, $s2, 0x15E
    ctx->pc = 0x4eec20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 350));
    // 0x4eec24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eec24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eec28: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4eec28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4eec2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eec30: 0x86420122  lh          $v0, 0x122($s2)
    ctx->pc = 0x4eec30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 290)));
    // 0x4eec34: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4eec34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eec38: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4eec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4eec3c: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4eec3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4eec40: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4eec40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4eec44: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4eec44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4eec48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eec48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eec4c: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4eec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4eec50: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4eec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4eec54: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eec58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4eec58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4eec5c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4eec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4eec60: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4eec60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4eec64: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eec64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4eec68: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4eec68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4eec6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eec6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eec70: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eec70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eec74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4eec74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4eec78: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4eec78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4eec7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4eec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eec80: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4eec80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4eec84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eec84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eec88: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eec88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eec8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eec8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eec90: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eec90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eec94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eec94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eec98: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4eec98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eec9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4eec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4eeca0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eeca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eeca4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eeca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eeca8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eeca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eecac: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4eecacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eecb0: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x4eecb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4eecb4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4EECB4u;
    {
        const bool branch_taken_0x4eecb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eecb4) {
            ctx->pc = 0x4EECB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EECB4u;
            // 0x4eecb8: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EECC8u;
            goto label_4eecc8;
        }
    }
    ctx->pc = 0x4EECBCu;
    // 0x4eecbc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4eecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4eecc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4EECC0u;
    {
        const bool branch_taken_0x4eecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EECC0u;
        // 0x4eecc4: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eecc0) {
            ctx->pc = 0x4EECD0u;
            goto label_4eecd0;
        }
    }
    ctx->pc = 0x4EECC8u;
label_4eecc8:
    // 0x4eecc8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4eecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4eeccc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4eecccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4eecd0:
    // 0x4eecd0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4eecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4eecd4: 0x26e611e8  addiu       $a2, $s7, 0x11E8
    ctx->pc = 0x4eecd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4584));
    // 0x4eecd8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4eecd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4eecdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4eecdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eece0: 0x96c311ec  lhu         $v1, 0x11EC($s6)
    ctx->pc = 0x4eece0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4588)));
    // 0x4eece4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4eece4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4eece8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4eece8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4eecec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4eececu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4eecf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eecf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eecf4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4eecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4eecf8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4eecf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4eecfc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eecfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4eed00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4eed00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eed04: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4eed04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4eed08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4eed08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4eed0c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4eed0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4eed10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4eed10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eed14: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4eed14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4eed18: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4eed18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4eed1c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4eed1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4eed20: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4eed20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4eed24: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x4eed24u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4eed28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4eed28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4eed2c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4eed2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4eed30: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4eed30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4eed34: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x4eed34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x4eed38: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4eed38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4eed3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eed3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eed40: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eed40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eed44: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4eed44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4eed48: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4eed48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4eed4c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4eed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4eed50: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4eed50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4eed54: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4eed54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4eed58: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x4eed58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x4eed5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4eed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4eed60: 0x94638128  lhu         $v1, -0x7ED8($v1)
    ctx->pc = 0x4eed60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294934824)));
    // 0x4eed64: 0xa643000c  sh          $v1, 0xC($s2)
    ctx->pc = 0x4eed64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4eed68: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4eed68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4eed6c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4eed6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4eed70: 0xa642011c  sh          $v0, 0x11C($s2)
    ctx->pc = 0x4eed70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eed74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4eed74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eed78: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4EED78u;
    ctx->pc = 0x4EED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EED78u;
    // 0x4eed7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4EED80u;
}
