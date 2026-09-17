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

// Function: sub_0049DE08
// Address: 0x49de08 - 0x49e498
void sub_0049DE08_0x49de08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049DE08_0x49de08");
#endif

    switch (ctx->pc) {
        case 0x49de48u: goto label_49de48;
        case 0x49de8cu: goto label_49de8c;
        case 0x49dea4u: goto label_49dea4;
        case 0x49df58u: goto label_49df58;
        case 0x49e1f8u: goto label_49e1f8;
        case 0x49e45cu: goto label_49e45c;
        case 0x49e464u: goto label_49e464;
        default: break;
    }

    ctx->pc = 0x49de08u;

    // 0x49de08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x49de08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x49de0c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x49de10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x49de10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49de14: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x49de14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x49de18: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x49de18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x49de1c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x49de1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x49de20: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x49de20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x49de24: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x49de24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x49de28: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x49de28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x49de2c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x49de2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x49de30: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x49de30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x49de34: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x49de34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x49de38: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x49de38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x49de3c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x49de3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x49de40: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x49DE40u;
    SET_GPR_U32(ctx, 31, 0x49DE48u);
    ctx->pc = 0x49DE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DE40u;
    // 0x49de44: 0xa440f88e  sh          $zero, -0x772($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965390), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x49DE40u, 0x49DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DE48u;
label_49de48:
    // 0x49de48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49de48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49de4c: 0x240200e4  addiu       $v0, $zero, 0xE4
    ctx->pc = 0x49de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
    // 0x49de50: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x49de50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x49de54: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49de54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49de58: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x49de58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x49de5c: 0x24847fc0  addiu       $a0, $a0, 0x7FC0
    ctx->pc = 0x49de5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32704));
    // 0x49de60: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x49de60u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x49de64: 0x24b20bac  addiu       $s2, $a1, 0xBAC
    ctx->pc = 0x49de64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 2988));
    // 0x49de68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49de6c: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x49de6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x49de70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49de70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49de74: 0xa4460118  sh          $a2, 0x118($v0)
    ctx->pc = 0x49de74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 6));
    // 0x49de78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49de78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49de7c: 0xa464011a  sh          $a0, 0x11A($v1)
    ctx->pc = 0x49de7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 282), (uint16_t)GPR_U32(ctx, 4));
    // 0x49de80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49de80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49de84: 0xc124620  jal         func_491880
    ctx->pc = 0x49DE84u;
    SET_GPR_U32(ctx, 31, 0x49DE8Cu);
    ctx->pc = 0x49DE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DE84u;
    // 0x49de88: 0xa440011c  sh          $zero, 0x11C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 284), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x49DE84u, 0x49DE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DE8Cu;
label_49de8c:
    // 0x49de8c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49de90: 0x3401a800  ori         $at, $zero, 0xA800
    ctx->pc = 0x49de90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x49de94: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x49de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x49de98: 0x24710ba4  addiu       $s1, $v1, 0xBA4
    ctx->pc = 0x49de98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2980));
    // 0x49de9c: 0xc12a64c  jal         func_4A9930
    ctx->pc = 0x49DE9Cu;
    SET_GPR_U32(ctx, 31, 0x49DEA4u);
    ctx->pc = 0x49DEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DE9Cu;
    // 0x49dea0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9930u, 0x49DE9Cu, 0x49DEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DEA4u;
label_49dea4:
    // 0x49dea4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x49dea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49dea8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x49dea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x49deac: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49deacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49deb0: 0x24480ba0  addiu       $t0, $v0, 0xBA0
    ctx->pc = 0x49deb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 2976));
    // 0x49deb4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49deb8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x49deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x49debc: 0x24490b90  addiu       $t1, $v0, 0xB90
    ctx->pc = 0x49debcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2960));
    // 0x49dec0: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x49dec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x49dec4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x49dec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49dec8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49dec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49decc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x49deccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BA0u));
    // 0x49ded0: 0x24870b88  addiu       $a3, $a0, 0xB88
    ctx->pc = 0x49ded0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2952));
    // 0x49ded4: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x49ded4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x49ded8: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x49ded8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x49dedc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49dedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49dee0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x49dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x49dee4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49dee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49dee8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49deec: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49deecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49def0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49def0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49def4: 0x24460b8c  addiu       $a2, $v0, 0xB8C
    ctx->pc = 0x49def4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2956));
    // 0x49def8: 0x348401d6  ori         $a0, $a0, 0x1D6
    ctx->pc = 0x49def8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)470);
    // 0x49defc: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x49defcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49df00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49df00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49df04: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x49df04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x49df08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49df08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49df0c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49df0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49df10: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x49df10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49df14: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x49df14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49df18: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x49df18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x49df1c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x49df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x49df20: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x49df20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49df24: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x49df24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49df28: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x49df28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49df2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49df2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49df30: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x49df30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x49df34: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x49df34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x49df38: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x49df38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x49df3c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x49df3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x49df40: 0x4a00144  bltz        $a1, . + 4 + (0x144 << 2)
    ctx->pc = 0x49DF40u;
    {
        const bool branch_taken_0x49df40 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x49DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DF40u;
        // 0x49df44: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49df40) {
            ctx->pc = 0x49E454u;
            goto label_49e454;
        }
    }
    ctx->pc = 0x49DF48u;
    // 0x49df48: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49df48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49df4c: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x49df4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49df50: 0x24590b94  addiu       $t9, $v0, 0xB94
    ctx->pc = 0x49df50u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 2964));
    // 0x49df54: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x49df54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_49df58:
    // 0x49df58: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49df58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49df5c: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x49df5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x49df60: 0x24630b8c  addiu       $v1, $v1, 0xB8C
    ctx->pc = 0x49df60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2956));
    // 0x49df64: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49df64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49df68: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49df68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B8Cu));
    // 0x49df6c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49df6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49df70: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x49df70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x49df74: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49df74u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49df78: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x49df78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x49df7c: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x49df7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x49df80: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x49df80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x49df84: 0x24ca0004  addiu       $t2, $a2, 0x4
    ctx->pc = 0x49df84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x49df88: 0x24e70ba4  addiu       $a3, $a3, 0xBA4
    ctx->pc = 0x49df88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2980));
    // 0x49df8c: 0x94820b88  lhu         $v0, 0xB88($a0)
    ctx->pc = 0x49df8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B88u));
    // 0x49df90: 0x24cb0006  addiu       $t3, $a2, 0x6
    ctx->pc = 0x49df90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x49df94: 0x24cc0008  addiu       $t4, $a2, 0x8
    ctx->pc = 0x49df94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x49df98: 0x24cd000a  addiu       $t5, $a2, 0xA
    ctx->pc = 0x49df98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x49df9c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49df9cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49dfa0: 0x24ce000c  addiu       $t6, $a2, 0xC
    ctx->pc = 0x49dfa0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x49dfa4: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x49dfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x49dfa8: 0x24cf000e  addiu       $t7, $a2, 0xE
    ctx->pc = 0x49dfa8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 14));
    // 0x49dfac: 0x24d20010  addiu       $s2, $a2, 0x10
    ctx->pc = 0x49dfacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49dfb0: 0x24d40012  addiu       $s4, $a2, 0x12
    ctx->pc = 0x49dfb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 18));
    // 0x49dfb4: 0x94a20b90  lhu         $v0, 0xB90($a1)
    ctx->pc = 0x49dfb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B90u));
    // 0x49dfb8: 0x24d50014  addiu       $s5, $a2, 0x14
    ctx->pc = 0x49dfb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x49dfbc: 0x24d60016  addiu       $s6, $a2, 0x16
    ctx->pc = 0x49dfbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 22));
    // 0x49dfc0: 0x24d70018  addiu       $s7, $a2, 0x18
    ctx->pc = 0x49dfc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x49dfc4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x49dfc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49dfc8: 0x24c3001a  addiu       $v1, $a2, 0x1A
    ctx->pc = 0x49dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 26));
    // 0x49dfcc: 0xafca0000  sw          $t2, 0x0($fp)
    ctx->pc = 0x49dfccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 10));
    // 0x49dfd0: 0x24d3001c  addiu       $s3, $a2, 0x1C
    ctx->pc = 0x49dfd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x49dfd4: 0x24d8001e  addiu       $t8, $a2, 0x1E
    ctx->pc = 0x49dfd4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 6), 30));
    // 0x49dfd8: 0x24d10020  addiu       $s1, $a2, 0x20
    ctx->pc = 0x49dfd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x49dfdc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0BA4u));
    // 0x49dfe0: 0x24c60022  addiu       $a2, $a2, 0x22
    ctx->pc = 0x49dfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 34));
    // 0x49dfe4: 0x8f240000  lw          $a0, 0x0($t9)
    ctx->pc = 0x49dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49dfe8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x49dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x49dfec: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49dfecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49dff0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x49dff0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49dff4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49dff8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x49dff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0BA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0BA4u, _value); } while (0);
    // 0x49dffc: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x49dffcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x49e000: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x49e000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x49e004: 0x24e70b98  addiu       $a3, $a3, 0xB98
    ctx->pc = 0x49e004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2968));
    // 0x49e008: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49e008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49e00c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49e010: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x49e010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49e014: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x49e014u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x49e018: 0xaf240000  sw          $a0, 0x0($t9)
    ctx->pc = 0x49e018u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 4));
    // 0x49e01c: 0x24630b9c  addiu       $v1, $v1, 0xB9C
    ctx->pc = 0x49e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2972));
    // 0x49e020: 0x24480002  addiu       $t0, $v0, 0x2
    ctx->pc = 0x49e020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49e024: 0x24e70ba4  addiu       $a3, $a3, 0xBA4
    ctx->pc = 0x49e024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2980));
    // 0x49e028: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49e028u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0B9Cu));
    // 0x49e02c: 0x24490004  addiu       $t1, $v0, 0x4
    ctx->pc = 0x49e02cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x49e030: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x49e030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49e034: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49e034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49e038: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x49e038u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x7F0BA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0BA4u, _value); } while (0);
    // 0x49e03c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49e03cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49e040: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x49e040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x49e044: 0x24420b98  addiu       $v0, $v0, 0xB98
    ctx->pc = 0x49e044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2968));
    // 0x49e048: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x49e048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x49e04c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49e050: 0x97270000  lhu         $a3, 0x0($t9)
    ctx->pc = 0x49e050u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49e054: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49e054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49e058: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x49e058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x49e05c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49e05cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49e060: 0x24a50b9c  addiu       $a1, $a1, 0xB9C
    ctx->pc = 0x49e060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2972));
    // 0x49e064: 0x24e7f800  addiu       $a3, $a3, -0x800
    ctx->pc = 0x49e064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965248));
    // 0x49e068: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x49e068u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49e06c: 0x24630ba4  addiu       $v1, $v1, 0xBA4
    ctx->pc = 0x49e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2980));
    // 0x49e070: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x49e070u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x7F0BA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0BA4u, _value); } while (0);
    // 0x49e074: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49e074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49e078: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49e078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49e07c: 0x24630b98  addiu       $v1, $v1, 0xB98
    ctx->pc = 0x49e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2968));
    // 0x49e080: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49e080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49e084: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x49e084u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x49e088: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49e088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49e08c: 0xa5470000  sh          $a3, 0x0($t2)
    ctx->pc = 0x49e08cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x49e090: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x49e090u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x49e094: 0xafcb0000  sw          $t3, 0x0($fp)
    ctx->pc = 0x49e094u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 11));
    // 0x49e098: 0x24e70b8c  addiu       $a3, $a3, 0xB8C
    ctx->pc = 0x49e098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2956));
    // 0x49e09c: 0x24840b98  addiu       $a0, $a0, 0xB98
    ctx->pc = 0x49e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2968));
    // 0x49e0a0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49e0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B8Cu));
    // 0x49e0a4: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x49e0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e0a8: 0xafcc0000  sw          $t4, 0x0($fp)
    ctx->pc = 0x49e0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 12));
    // 0x49e0ac: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49e0acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49e0b0: 0x2442e800  addiu       $v0, $v0, -0x1800
    ctx->pc = 0x49e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961152));
    // 0x49e0b4: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x49e0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e0b8: 0xafcd0000  sw          $t5, 0x0($fp)
    ctx->pc = 0x49e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 13));
    // 0x49e0bc: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49e0bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B8Cu));
    // 0x49e0c0: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x49e0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e0c4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x49e0c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49e0c8: 0xafce0000  sw          $t6, 0x0($fp)
    ctx->pc = 0x49e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 14));
    // 0x49e0cc: 0x24632800  addiu       $v1, $v1, 0x2800
    ctx->pc = 0x49e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10240));
    // 0x49e0d0: 0xa5c30000  sh          $v1, 0x0($t6)
    ctx->pc = 0x49e0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49e0d4: 0xafcf0000  sw          $t7, 0x0($fp)
    ctx->pc = 0x49e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 15));
    // 0x49e0d8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49e0d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B8Cu));
    // 0x49e0dc: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x49e0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x49e0e0: 0x24e70b9c  addiu       $a3, $a3, 0xB9C
    ctx->pc = 0x49e0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2972));
    // 0x49e0e4: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x49e0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e0e8: 0xafd20000  sw          $s2, 0x0($fp)
    ctx->pc = 0x49e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 18));
    // 0x49e0ec: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x49e0ecu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F0B98u));
    // 0x49e0f0: 0x87250000  lh          $a1, 0x0($t9)
    ctx->pc = 0x49e0f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49e0f4: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x49e0f4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7F0B9Cu));
    // 0x49e0f8: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x49e0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x49e0fc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x49e0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x49e100: 0x24e70b98  addiu       $a3, $a3, 0xB98
    ctx->pc = 0x49e100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2968));
    // 0x49e104: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x49e104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x49e108: 0xb02024  and         $a0, $a1, $s0
    ctx->pc = 0x49e108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x49e10c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x49e10cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x49e110: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49e110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49e114: 0x24630b9c  addiu       $v1, $v1, 0xB9C
    ctx->pc = 0x49e114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2972));
    // 0x49e118: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x49e118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x49e11c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x49e11cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x49e120: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x49e120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x49e124: 0xaf250000  sw          $a1, 0x0($t9)
    ctx->pc = 0x49e124u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 5));
    // 0x49e128: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49e128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49e12c: 0xa6440000  sh          $a0, 0x0($s2)
    ctx->pc = 0x49e12cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x49e130: 0x24a50b8c  addiu       $a1, $a1, 0xB8C
    ctx->pc = 0x49e130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2956));
    // 0x49e134: 0xafd40000  sw          $s4, 0x0($fp)
    ctx->pc = 0x49e134u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 20));
    // 0x49e138: 0x97220000  lhu         $v0, 0x0($t9)
    ctx->pc = 0x49e138u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49e13c: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x49e13cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e140: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x49e140u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
    // 0x49e144: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49e148: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x49e148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x49e14c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49e150: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x49e150u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e154: 0xafd60000  sw          $s6, 0x0($fp)
    ctx->pc = 0x49e154u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
    // 0x49e158: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49e158u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49e15c: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x49e15cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e160: 0xafd70000  sw          $s7, 0x0($fp)
    ctx->pc = 0x49e160u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
    // 0x49e164: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x49e164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49e168: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x49e168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x49e16c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49e170: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x49e170u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e174: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x49e174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x49e178: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x49e178u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x49e17c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49e17cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49e180: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x49e180u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e184: 0xafd30000  sw          $s3, 0x0($fp)
    ctx->pc = 0x49e184u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 19));
    // 0x49e188: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49e188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49e18c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x49e18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x49e190: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49e190u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49e194: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x49e194u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e198: 0xafd80000  sw          $t8, 0x0($fp)
    ctx->pc = 0x49e198u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 24));
    // 0x49e19c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49e19cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49e1a0: 0xa7020000  sh          $v0, 0x0($t8)
    ctx->pc = 0x49e1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e1a4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x49e1a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49e1a8: 0xafd10000  sw          $s1, 0x0($fp)
    ctx->pc = 0x49e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 17));
    // 0x49e1ac: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x49e1acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49e1b0: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x49e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x49e1b4: 0x8f220000  lw          $v0, 0x0($t9)
    ctx->pc = 0x49e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49e1b8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x49E1B8u;
    {
        const bool branch_taken_0x49e1b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x49E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E1B8u;
        // 0x49e1bc: 0x3c07007f  lui         $a3, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e1b8) {
            ctx->pc = 0x49E1D8u;
            goto label_49e1d8;
        }
    }
    ctx->pc = 0x49E1C0u;
    // 0x49e1c0: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x49e1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x49e1c4: 0x24c60b9c  addiu       $a2, $a2, 0xB9C
    ctx->pc = 0x49e1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2972));
    // 0x49e1c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x49e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0B9Cu));
    // 0x49e1cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x49E1CCu;
    {
        const bool branch_taken_0x49e1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E1CCu;
        // 0x49e1d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e1cc) {
            ctx->pc = 0x49E1E4u;
            goto label_49e1e4;
        }
    }
    ctx->pc = 0x49E1D4u;
    // 0x49e1d4: 0x0  nop
    ctx->pc = 0x49e1d4u;
    // NOP
label_49e1d8:
    // 0x49e1d8: 0x24e70b9c  addiu       $a3, $a3, 0xB9C
    ctx->pc = 0x49e1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2972));
    // 0x49e1dc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49e1e0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x49e1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_49e1e4:
    // 0x49e1e4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49e1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49e1e8: 0x24630b9c  addiu       $v1, $v1, 0xB9C
    ctx->pc = 0x49e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2972));
    // 0x49e1ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x49e1ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0B9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B9Cu, _value); } while (0);
    // 0x49e1f0: 0xc129354  jal         func_4A4D50
    ctx->pc = 0x49E1F0u;
    SET_GPR_U32(ctx, 31, 0x49E1F8u);
    ctx->pc = 0x49E1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E1F0u;
    // 0x49e1f4: 0x7fb90010  sq          $t9, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4D50u, 0x49E1F0u, 0x49E1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E1F8u;
label_49e1f8:
    // 0x49e1f8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49e1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49e1fc: 0x24840b84  addiu       $a0, $a0, 0xB84
    ctx->pc = 0x49e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2948));
    // 0x49e200: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x49e200u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x49e204: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49e204u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B84u));
    // 0x49e208: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x49e208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x49e20c: 0x7bb90010  lq          $t9, 0x10($sp)
    ctx->pc = 0x49e20cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49e210: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49e210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49e214: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49e214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49e218: 0x24aa0b9c  addiu       $t2, $a1, 0xB9C
    ctx->pc = 0x49e218u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 2972));
    // 0x49e21c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49e21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49e220: 0x95480000  lhu         $t0, 0x0($t2)
    ctx->pc = 0x49e220u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49e224: 0x8f250000  lw          $a1, 0x0($t9)
    ctx->pc = 0x49e224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49e228: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x49e228u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x49e22c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x49e230: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x49e230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49e234: 0x24c60b84  addiu       $a2, $a2, 0xB84
    ctx->pc = 0x49e234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2948));
    // 0x49e238: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x49e238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x49e23c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x49e23cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49e240: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x49e240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x49e244: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x49e244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x49e248: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x49e248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x49e24c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x49e24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x49e250: 0xaf250000  sw          $a1, 0x0($t9)
    ctx->pc = 0x49e250u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 5));
    // 0x49e254: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x49e254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x49e258: 0x83c00  sll         $a3, $t0, 16
    ctx->pc = 0x49e258u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x49e25c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49e25cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49e260: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49e260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49e264: 0x24420b84  addiu       $v0, $v0, 0xB84
    ctx->pc = 0x49e264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2948));
    // 0x49e268: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x49e268u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x49e26c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x49e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x49e270: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49e270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49e274: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49e274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e278: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49e278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49e27c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49e27cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49e280: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x49e280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x49e284: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49e284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49e288: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49e288u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49e28c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x49e28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x49e290: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49e290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49e294: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x49e294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x49e298: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49e298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49e29c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x49e29cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49e2a0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x49e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x49e2a4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x49e2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x49e2a8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49e2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49e2ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x49e2acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x49e2b0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49e2b4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49e2b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49e2b8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49e2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e2bc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x49e2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x49e2c0: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x49e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x49e2c4: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x49e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x49e2c8: 0x94820b8c  lhu         $v0, 0xB8C($a0)
    ctx->pc = 0x49e2c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B8Cu));
    // 0x49e2cc: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49e2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e2d0: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x49e2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x49e2d4: 0x8ca20b98  lw          $v0, 0xB98($a1)
    ctx->pc = 0x49e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2968)));
    // 0x49e2d8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49E2D8u;
    {
        const bool branch_taken_0x49e2d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x49E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E2D8u;
        // 0x49e2dc: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e2d8) {
            ctx->pc = 0x49E2E8u;
            goto label_49e2e8;
        }
    }
    ctx->pc = 0x49E2E0u;
    // 0x49e2e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49E2E0u;
    {
        const bool branch_taken_0x49e2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E2E0u;
        // 0x49e2e4: 0x3446ffff  ori         $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e2e0) {
            ctx->pc = 0x49E2ECu;
            goto label_49e2ec;
        }
    }
    ctx->pc = 0x49E2E8u;
label_49e2e8:
    // 0x49e2e8: 0x493024  and         $a2, $v0, $t1
    ctx->pc = 0x49e2e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_49e2ec:
    // 0x49e2ec: 0x87220000  lh          $v0, 0x0($t9)
    ctx->pc = 0x49e2ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49e2f0: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x49e2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x49e2f4: 0x8f240000  lw          $a0, 0x0($t9)
    ctx->pc = 0x49e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49e2f8: 0x2445001f  addiu       $a1, $v0, 0x1F
    ctx->pc = 0x49e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x49e2fc: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x49e2fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x49e300: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x49e300u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x49e304: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x49e304u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x49e308: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x49e308u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x49e30c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49e30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49e310: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49e310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49e314: 0x94e60b9c  lhu         $a2, 0xB9C($a3)
    ctx->pc = 0x49e314u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2972)));
    // 0x49e318: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49e318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49e31c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x49e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x49e320: 0xaf240000  sw          $a0, 0x0($t9)
    ctx->pc = 0x49e320u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 4));
    // 0x49e324: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49e324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49e328: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x49e328u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x49e32c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x49e32cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x49e330: 0x97220000  lhu         $v0, 0x0($t9)
    ctx->pc = 0x49e330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49e334: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x49e334u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x49e338: 0x24e70ba0  addiu       $a3, $a3, 0xBA0
    ctx->pc = 0x49e338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2976));
    // 0x49e33c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x49e33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x49e340: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49e340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49e344: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49e344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49e348: 0xaf240000  sw          $a0, 0x0($t9)
    ctx->pc = 0x49e348u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 4));
    // 0x49e34c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49e34cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49e350: 0x97220000  lhu         $v0, 0x0($t9)
    ctx->pc = 0x49e350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49e354: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x49e354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x49e358: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x49e358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x49e35c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49e360: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49e360u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49e364: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49e364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49e368: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49e368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49e36c: 0xaf240000  sw          $a0, 0x0($t9)
    ctx->pc = 0x49e36cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 4));
    // 0x49e370: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49e370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49e374: 0x87220000  lh          $v0, 0x0($t9)
    ctx->pc = 0x49e374u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49e378: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x49e378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49e37c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49e37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49e380: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49e380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49e384: 0xaf240000  sw          $a0, 0x0($t9)
    ctx->pc = 0x49e384u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 4));
    // 0x49e388: 0x97220000  lhu         $v0, 0x0($t9)
    ctx->pc = 0x49e388u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x49e38c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x49e38cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e390: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x49e390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x49e394: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x49e394u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x49e398: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x49e398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x49e39c: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x49e39cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e3a0: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x49e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x49e3a4: 0x24650006  addiu       $a1, $v1, 0x6
    ctx->pc = 0x49e3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x49e3a8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x49e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x49e3ac: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x49e3acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x49e3b0: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x49e3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x49e3b4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x49e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x49e3b8: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x49e3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e3bc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49e3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49e3c0: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x49e3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x49e3c4: 0x24840b88  addiu       $a0, $a0, 0xB88
    ctx->pc = 0x49e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2952));
    // 0x49e3c8: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x49e3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x49e3cc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x49e3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x49e3d0: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x49e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x49e3d4: 0x24c60b90  addiu       $a2, $a2, 0xB90
    ctx->pc = 0x49e3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2960));
    // 0x49e3d8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x49e3d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49e3dc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x49e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49e3e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49e3e4: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x49e3e4u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x7F0B88u));
    // 0x49e3e8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49e3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49e3ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49e3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49e3f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49e3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49e3f4: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x49e3f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49e3f8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x49e3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x49e3fc: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x49e3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x49e400: 0x24e70b88  addiu       $a3, $a3, 0xB88
    ctx->pc = 0x49e400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2952));
    // 0x49e404: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x49e404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x49e408: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x49e408u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B88u));
    // 0x49e40c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x49e40cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x49e410: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x49e410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49e414: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x49e414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x49e418: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x49e418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x49e41c: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x49e41cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x49e420: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49e420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49e424: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49e424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49e428: 0x24e70ba0  addiu       $a3, $a3, 0xBA0
    ctx->pc = 0x49e428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2976));
    // 0x49e42c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x49e42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x49e430: 0x84e60000  lh          $a2, 0x0($a3)
    ctx->pc = 0x49e430u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49e434: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x49e434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x49e438: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49e438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49e43c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49e43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49e440: 0x24840b88  addiu       $a0, $a0, 0xB88
    ctx->pc = 0x49e440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2952));
    // 0x49e444: 0x24a50b90  addiu       $a1, $a1, 0xB90
    ctx->pc = 0x49e444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2960));
    // 0x49e448: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49e448u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0B88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B88u, _value); } while (0);
    // 0x49e44c: 0x4c1fec2  bgez        $a2, . + 4 + (-0x13E << 2)
    ctx->pc = 0x49E44Cu;
    {
        const bool branch_taken_0x49e44c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x49E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E44Cu;
        // 0x49e450: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e44c) {
            ctx->pc = 0x49DF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49df58;
        }
    }
    ctx->pc = 0x49E454u;
label_49e454:
    // 0x49e454: 0xc127604  jal         func_49D810
    ctx->pc = 0x49E454u;
    SET_GPR_U32(ctx, 31, 0x49E45Cu);
    ctx->pc = 0x49D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D810u, 0x49E454u, 0x49E45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E45Cu;
label_49e45c:
    // 0x49e45c: 0xc127488  jal         func_49D220
    ctx->pc = 0x49E45Cu;
    SET_GPR_U32(ctx, 31, 0x49E464u);
    ctx->pc = 0x49D220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D220u, 0x49E45Cu, 0x49E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E464u;
label_49e464:
    // 0x49e464: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x49e464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49e468: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x49e468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49e46c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x49e46cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49e470: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x49e470u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49e474: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x49e474u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49e478: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x49e478u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x49e47c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x49e47cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49e480: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x49e480u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x49e484: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x49e484u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49e488: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x49e488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x49e48c: 0x3e00008  jr          $ra
    ctx->pc = 0x49E48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E48Cu;
        // 0x49e490: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49E48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49E494u;
    // 0x49e494: 0x0  nop
    ctx->pc = 0x49e494u;
    // NOP
    ctx->pc = 0x49e498u;
}
