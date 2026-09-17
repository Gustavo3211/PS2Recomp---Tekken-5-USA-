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

// Function: sub_00265938
// Address: 0x265938 - 0x265f60
void sub_00265938_0x265938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265938_0x265938");
#endif

    switch (ctx->pc) {
        case 0x2659f4u: goto label_2659f4;
        case 0x265a48u: goto label_265a48;
        case 0x265a88u: goto label_265a88;
        case 0x265d68u: goto label_265d68;
        case 0x265d80u: goto label_265d80;
        case 0x265d90u: goto label_265d90;
        case 0x265da0u: goto label_265da0;
        case 0x265db0u: goto label_265db0;
        case 0x265dc0u: goto label_265dc0;
        case 0x265dd0u: goto label_265dd0;
        case 0x265de0u: goto label_265de0;
        case 0x265df0u: goto label_265df0;
        case 0x265e00u: goto label_265e00;
        case 0x265e10u: goto label_265e10;
        case 0x265e20u: goto label_265e20;
        case 0x265e30u: goto label_265e30;
        case 0x265e40u: goto label_265e40;
        case 0x265e50u: goto label_265e50;
        case 0x265e60u: goto label_265e60;
        case 0x265e70u: goto label_265e70;
        case 0x265e80u: goto label_265e80;
        case 0x265e90u: goto label_265e90;
        case 0x265ea0u: goto label_265ea0;
        case 0x265eb0u: goto label_265eb0;
        case 0x265ec0u: goto label_265ec0;
        case 0x265ed0u: goto label_265ed0;
        case 0x265ee0u: goto label_265ee0;
        case 0x265ef4u: goto label_265ef4;
        case 0x265f18u: goto label_265f18;
        default: break;
    }

    ctx->pc = 0x265938u;

    // 0x265938: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x265938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26593c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26593cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x265940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265944: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x265944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x265948: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x265948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26594c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265950: 0x84640096  lh          $a0, 0x96($v1)
    ctx->pc = 0x265950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x265954: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x265954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x265958: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x265958u;
    {
        const bool branch_taken_0x265958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x26595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265958u;
        // 0x26595c: 0xac44003c  sw          $a0, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265958) {
            ctx->pc = 0x265970u;
            goto label_265970;
        }
    }
    ctx->pc = 0x265960u;
    // 0x265960: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265964: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x265964u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x265968: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26596c: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x26596cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
label_265970:
    // 0x265970: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x265970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x265974: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x265974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265978: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x265978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x26597c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x26597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x265980: 0xaca3031c  sw          $v1, 0x31C($a1)
    ctx->pc = 0x265980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 796), GPR_U32(ctx, 3));
    // 0x265984: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x265984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x265988: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x265988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26598c: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x26598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x265990: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x265990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x265994: 0xaca30320  sw          $v1, 0x320($a1)
    ctx->pc = 0x265994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 800), GPR_U32(ctx, 3));
    // 0x265998: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x265998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26599c: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26599cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2659a0: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x2659a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2659a4: 0x94430010  lhu         $v1, 0x10($v0)
    ctx->pc = 0x2659a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2659a8: 0xaca30324  sw          $v1, 0x324($a1)
    ctx->pc = 0x2659a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 804), GPR_U32(ctx, 3));
    // 0x2659ac: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x2659acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x2659b0: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x2659b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2659b4: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x2659b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2659b8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2659b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2659bc: 0xaca30328  sw          $v1, 0x328($a1)
    ctx->pc = 0x2659bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 808), GPR_U32(ctx, 3));
    // 0x2659c0: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x2659c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x2659c4: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x2659c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2659c8: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x2659c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2659cc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2659ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2659d0: 0xaca3032c  sw          $v1, 0x32C($a1)
    ctx->pc = 0x2659d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 812), GPR_U32(ctx, 3));
    // 0x2659d4: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x2659d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x2659d8: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x2659d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2659dc: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x2659dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2659e0: 0x94430010  lhu         $v1, 0x10($v0)
    ctx->pc = 0x2659e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2659e4: 0xaca30330  sw          $v1, 0x330($a1)
    ctx->pc = 0x2659e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 816), GPR_U32(ctx, 3));
    // 0x2659e8: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x2659e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2659ec: 0xc081efe  jal         func_207BF8
    ctx->pc = 0x2659ECu;
    SET_GPR_U32(ctx, 31, 0x2659F4u);
    ctx->pc = 0x2659F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2659ECu;
    // 0x2659f0: 0x8f84aa7c  lw          $a0, -0x5584($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207BF8u, 0x2659ECu, 0x2659F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2659F4u;
label_2659f4:
    // 0x2659f4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2659f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2659f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2659f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2659fc: 0xac600414  sw          $zero, 0x414($v1)
    ctx->pc = 0x2659fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1044), GPR_U32(ctx, 0));
    // 0x265a00: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x265a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265a04: 0xac400418  sw          $zero, 0x418($v0)
    ctx->pc = 0x265a04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1048), GPR_U32(ctx, 0));
    // 0x265a08: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265a0c: 0xa4600420  sh          $zero, 0x420($v1)
    ctx->pc = 0x265a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1056), (uint16_t)GPR_U32(ctx, 0));
    // 0x265a10: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x265a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265a14: 0xa4400422  sh          $zero, 0x422($v0)
    ctx->pc = 0x265a14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1058), (uint16_t)GPR_U32(ctx, 0));
    // 0x265a18: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265a1c: 0xa4600424  sh          $zero, 0x424($v1)
    ctx->pc = 0x265a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1060), (uint16_t)GPR_U32(ctx, 0));
    // 0x265a20: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x265a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265a24: 0xa4400426  sh          $zero, 0x426($v0)
    ctx->pc = 0x265a24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1062), (uint16_t)GPR_U32(ctx, 0));
    // 0x265a28: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265a2c: 0xa4600428  sh          $zero, 0x428($v1)
    ctx->pc = 0x265a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1064), (uint16_t)GPR_U32(ctx, 0));
    // 0x265a30: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x265a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265a34: 0xa440042a  sh          $zero, 0x42A($v0)
    ctx->pc = 0x265a34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1066), (uint16_t)GPR_U32(ctx, 0));
    // 0x265a38: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265a3c: 0xa460042c  sh          $zero, 0x42C($v1)
    ctx->pc = 0x265a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1068), (uint16_t)GPR_U32(ctx, 0));
    // 0x265a40: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x265a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265a44: 0xa440042e  sh          $zero, 0x42E($v0)
    ctx->pc = 0x265a44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1070), (uint16_t)GPR_U32(ctx, 0));
label_265a48:
    // 0x265a48: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x265a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265a4c: 0x8c820414  lw          $v0, 0x414($a0)
    ctx->pc = 0x265a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1044)));
    // 0x265a50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x265A50u;
    {
        const bool branch_taken_0x265a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A50u;
        // 0x265a54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a50) {
            ctx->pc = 0x265A6Cu;
            goto label_265a6c;
        }
    }
    ctx->pc = 0x265A58u;
    // 0x265a58: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x265a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x265a5c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x265a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x265a60: 0x8c4303d4  lw          $v1, 0x3D4($v0)
    ctx->pc = 0x265a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 980)));
    // 0x265a64: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x265A64u;
    {
        const bool branch_taken_0x265a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265a64) {
            ctx->pc = 0x265A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265A64u;
            // 0x265a68: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265A74u;
            goto label_265a74;
        }
    }
    ctx->pc = 0x265A6Cu;
label_265a6c:
    // 0x265a6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x265a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265a70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x265a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_265a74:
    // 0x265a74: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x265a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x265a78: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x265A78u;
    {
        const bool branch_taken_0x265a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A78u;
        // 0x265a7c: 0xac860414  sw          $a2, 0x414($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1044), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a78) {
            ctx->pc = 0x265A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265a48;
        }
    }
    ctx->pc = 0x265A80u;
    // 0x265a80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a84: 0x0  nop
    ctx->pc = 0x265a84u;
    // NOP
label_265a88:
    // 0x265a88: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x265a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265a8c: 0x8c820414  lw          $v0, 0x414($a0)
    ctx->pc = 0x265a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1044)));
    // 0x265a90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x265A90u;
    {
        const bool branch_taken_0x265a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A90u;
        // 0x265a94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265a90) {
            ctx->pc = 0x265AACu;
            goto label_265aac;
        }
    }
    ctx->pc = 0x265A98u;
    // 0x265a98: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x265a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x265a9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x265a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x265aa0: 0x8c4303f4  lw          $v1, 0x3F4($v0)
    ctx->pc = 0x265aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1012)));
    // 0x265aa4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x265AA4u;
    {
        const bool branch_taken_0x265aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265aa4) {
            ctx->pc = 0x265AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265AA4u;
            // 0x265aa8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265AB4u;
            goto label_265ab4;
        }
    }
    ctx->pc = 0x265AACu;
label_265aac:
    // 0x265aac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x265aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265ab0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x265ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_265ab4:
    // 0x265ab4: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x265ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x265ab8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x265AB8u;
    {
        const bool branch_taken_0x265ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265AB8u;
        // 0x265abc: 0xac860414  sw          $a2, 0x414($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1044), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ab8) {
            ctx->pc = 0x265A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265a88;
        }
    }
    ctx->pc = 0x265AC0u;
    // 0x265ac0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265ac4: 0x8c6203d4  lw          $v0, 0x3D4($v1)
    ctx->pc = 0x265ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 980)));
    // 0x265ac8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265AC8u;
    {
        const bool branch_taken_0x265ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265ac8) {
            ctx->pc = 0x265ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265AC8u;
            // 0x265acc: 0x8c6203f0  lw          $v0, 0x3F0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265AE4u;
            goto label_265ae4;
        }
    }
    ctx->pc = 0x265AD0u;
    // 0x265ad0: 0x94620420  lhu         $v0, 0x420($v1)
    ctx->pc = 0x265ad0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1056)));
    // 0x265ad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265ad8: 0xa4620420  sh          $v0, 0x420($v1)
    ctx->pc = 0x265ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1056), (uint16_t)GPR_U32(ctx, 2));
    // 0x265adc: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265ae0: 0x8c6203f0  lw          $v0, 0x3F0($v1)
    ctx->pc = 0x265ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1008)));
label_265ae4:
    // 0x265ae4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265AE4u;
    {
        const bool branch_taken_0x265ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265ae4) {
            ctx->pc = 0x265AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265AE4u;
            // 0x265ae8: 0x8c6203d8  lw          $v0, 0x3D8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 984)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265B00u;
            goto label_265b00;
        }
    }
    ctx->pc = 0x265AECu;
    // 0x265aec: 0x94620420  lhu         $v0, 0x420($v1)
    ctx->pc = 0x265aecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1056)));
    // 0x265af0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265af4: 0xa4620420  sh          $v0, 0x420($v1)
    ctx->pc = 0x265af4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1056), (uint16_t)GPR_U32(ctx, 2));
    // 0x265af8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265afc: 0x8c6203d8  lw          $v0, 0x3D8($v1)
    ctx->pc = 0x265afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 984)));
label_265b00:
    // 0x265b00: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265B00u;
    {
        const bool branch_taken_0x265b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265b00) {
            ctx->pc = 0x265B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265B00u;
            // 0x265b04: 0x8c6203e8  lw          $v0, 0x3E8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1000)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265B1Cu;
            goto label_265b1c;
        }
    }
    ctx->pc = 0x265B08u;
    // 0x265b08: 0x94620420  lhu         $v0, 0x420($v1)
    ctx->pc = 0x265b08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1056)));
    // 0x265b0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265b10: 0xa4620420  sh          $v0, 0x420($v1)
    ctx->pc = 0x265b10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1056), (uint16_t)GPR_U32(ctx, 2));
    // 0x265b14: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265b18: 0x8c6203e8  lw          $v0, 0x3E8($v1)
    ctx->pc = 0x265b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1000)));
label_265b1c:
    // 0x265b1c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265B1Cu;
    {
        const bool branch_taken_0x265b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265b1c) {
            ctx->pc = 0x265B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265B1Cu;
            // 0x265b20: 0x8c6203e4  lw          $v0, 0x3E4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 996)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265B38u;
            goto label_265b38;
        }
    }
    ctx->pc = 0x265B24u;
    // 0x265b24: 0x94620422  lhu         $v0, 0x422($v1)
    ctx->pc = 0x265b24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1058)));
    // 0x265b28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265b2c: 0xa4620422  sh          $v0, 0x422($v1)
    ctx->pc = 0x265b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1058), (uint16_t)GPR_U32(ctx, 2));
    // 0x265b30: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265b34: 0x8c6203e4  lw          $v0, 0x3E4($v1)
    ctx->pc = 0x265b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 996)));
label_265b38:
    // 0x265b38: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265B38u;
    {
        const bool branch_taken_0x265b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265b38) {
            ctx->pc = 0x265B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265B38u;
            // 0x265b3c: 0x8c6203e0  lw          $v0, 0x3E0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 992)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265B54u;
            goto label_265b54;
        }
    }
    ctx->pc = 0x265B40u;
    // 0x265b40: 0x94620422  lhu         $v0, 0x422($v1)
    ctx->pc = 0x265b40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1058)));
    // 0x265b44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265b48: 0xa4620422  sh          $v0, 0x422($v1)
    ctx->pc = 0x265b48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1058), (uint16_t)GPR_U32(ctx, 2));
    // 0x265b4c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265b50: 0x8c6203e0  lw          $v0, 0x3E0($v1)
    ctx->pc = 0x265b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 992)));
label_265b54:
    // 0x265b54: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265B54u;
    {
        const bool branch_taken_0x265b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265b54) {
            ctx->pc = 0x265B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265B54u;
            // 0x265b58: 0x8c6203f0  lw          $v0, 0x3F0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265B70u;
            goto label_265b70;
        }
    }
    ctx->pc = 0x265B5Cu;
    // 0x265b5c: 0x94620422  lhu         $v0, 0x422($v1)
    ctx->pc = 0x265b5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1058)));
    // 0x265b60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265b64: 0xa4620422  sh          $v0, 0x422($v1)
    ctx->pc = 0x265b64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1058), (uint16_t)GPR_U32(ctx, 2));
    // 0x265b68: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265b6c: 0x8c6203f0  lw          $v0, 0x3F0($v1)
    ctx->pc = 0x265b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1008)));
label_265b70:
    // 0x265b70: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265B70u;
    {
        const bool branch_taken_0x265b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265b70) {
            ctx->pc = 0x265B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265B70u;
            // 0x265b74: 0x8c6203ec  lw          $v0, 0x3EC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1004)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265B8Cu;
            goto label_265b8c;
        }
    }
    ctx->pc = 0x265B78u;
    // 0x265b78: 0x94620424  lhu         $v0, 0x424($v1)
    ctx->pc = 0x265b78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1060)));
    // 0x265b7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265b80: 0xa4620424  sh          $v0, 0x424($v1)
    ctx->pc = 0x265b80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1060), (uint16_t)GPR_U32(ctx, 2));
    // 0x265b84: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265b88: 0x8c6203ec  lw          $v0, 0x3EC($v1)
    ctx->pc = 0x265b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1004)));
label_265b8c:
    // 0x265b8c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265B8Cu;
    {
        const bool branch_taken_0x265b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265b8c) {
            ctx->pc = 0x265B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265B8Cu;
            // 0x265b90: 0x8c6203e8  lw          $v0, 0x3E8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1000)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265BA8u;
            goto label_265ba8;
        }
    }
    ctx->pc = 0x265B94u;
    // 0x265b94: 0x94620424  lhu         $v0, 0x424($v1)
    ctx->pc = 0x265b94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1060)));
    // 0x265b98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265b9c: 0xa4620424  sh          $v0, 0x424($v1)
    ctx->pc = 0x265b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1060), (uint16_t)GPR_U32(ctx, 2));
    // 0x265ba0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265ba4: 0x8c6203e8  lw          $v0, 0x3E8($v1)
    ctx->pc = 0x265ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1000)));
label_265ba8:
    // 0x265ba8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265BA8u;
    {
        const bool branch_taken_0x265ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265ba8) {
            ctx->pc = 0x265BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265BA8u;
            // 0x265bac: 0x8c6203d8  lw          $v0, 0x3D8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 984)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265BC4u;
            goto label_265bc4;
        }
    }
    ctx->pc = 0x265BB0u;
    // 0x265bb0: 0x94620424  lhu         $v0, 0x424($v1)
    ctx->pc = 0x265bb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1060)));
    // 0x265bb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265bb8: 0xa4620424  sh          $v0, 0x424($v1)
    ctx->pc = 0x265bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1060), (uint16_t)GPR_U32(ctx, 2));
    // 0x265bbc: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265bc0: 0x8c6203d8  lw          $v0, 0x3D8($v1)
    ctx->pc = 0x265bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 984)));
label_265bc4:
    // 0x265bc4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265BC4u;
    {
        const bool branch_taken_0x265bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265bc4) {
            ctx->pc = 0x265BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265BC4u;
            // 0x265bc8: 0x8c6203dc  lw          $v0, 0x3DC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 988)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265BE0u;
            goto label_265be0;
        }
    }
    ctx->pc = 0x265BCCu;
    // 0x265bcc: 0x94620426  lhu         $v0, 0x426($v1)
    ctx->pc = 0x265bccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1062)));
    // 0x265bd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265bd4: 0xa4620426  sh          $v0, 0x426($v1)
    ctx->pc = 0x265bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1062), (uint16_t)GPR_U32(ctx, 2));
    // 0x265bd8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265bdc: 0x8c6203dc  lw          $v0, 0x3DC($v1)
    ctx->pc = 0x265bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 988)));
label_265be0:
    // 0x265be0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265BE0u;
    {
        const bool branch_taken_0x265be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265be0) {
            ctx->pc = 0x265BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265BE0u;
            // 0x265be4: 0x8c6203e0  lw          $v0, 0x3E0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 992)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265BFCu;
            goto label_265bfc;
        }
    }
    ctx->pc = 0x265BE8u;
    // 0x265be8: 0x94620426  lhu         $v0, 0x426($v1)
    ctx->pc = 0x265be8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1062)));
    // 0x265bec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265bf0: 0xa4620426  sh          $v0, 0x426($v1)
    ctx->pc = 0x265bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1062), (uint16_t)GPR_U32(ctx, 2));
    // 0x265bf4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265bf8: 0x8c6203e0  lw          $v0, 0x3E0($v1)
    ctx->pc = 0x265bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 992)));
label_265bfc:
    // 0x265bfc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265BFCu;
    {
        const bool branch_taken_0x265bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265bfc) {
            ctx->pc = 0x265C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265BFCu;
            // 0x265c00: 0x8c620410  lw          $v0, 0x410($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265C18u;
            goto label_265c18;
        }
    }
    ctx->pc = 0x265C04u;
    // 0x265c04: 0x94620426  lhu         $v0, 0x426($v1)
    ctx->pc = 0x265c04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1062)));
    // 0x265c08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265c0c: 0xa4620426  sh          $v0, 0x426($v1)
    ctx->pc = 0x265c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1062), (uint16_t)GPR_U32(ctx, 2));
    // 0x265c10: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265c14: 0x8c620410  lw          $v0, 0x410($v1)
    ctx->pc = 0x265c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1040)));
label_265c18:
    // 0x265c18: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265C18u;
    {
        const bool branch_taken_0x265c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265c18) {
            ctx->pc = 0x265C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265C18u;
            // 0x265c1c: 0x8c6203f4  lw          $v0, 0x3F4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1012)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265C34u;
            goto label_265c34;
        }
    }
    ctx->pc = 0x265C20u;
    // 0x265c20: 0x94620428  lhu         $v0, 0x428($v1)
    ctx->pc = 0x265c20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1064)));
    // 0x265c24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265c28: 0xa4620428  sh          $v0, 0x428($v1)
    ctx->pc = 0x265c28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1064), (uint16_t)GPR_U32(ctx, 2));
    // 0x265c2c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265c30: 0x8c6203f4  lw          $v0, 0x3F4($v1)
    ctx->pc = 0x265c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1012)));
label_265c34:
    // 0x265c34: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265C34u;
    {
        const bool branch_taken_0x265c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265c34) {
            ctx->pc = 0x265C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265C34u;
            // 0x265c38: 0x8c6203f8  lw          $v0, 0x3F8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1016)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265C50u;
            goto label_265c50;
        }
    }
    ctx->pc = 0x265C3Cu;
    // 0x265c3c: 0x94620428  lhu         $v0, 0x428($v1)
    ctx->pc = 0x265c3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1064)));
    // 0x265c40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265c44: 0xa4620428  sh          $v0, 0x428($v1)
    ctx->pc = 0x265c44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1064), (uint16_t)GPR_U32(ctx, 2));
    // 0x265c48: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265c4c: 0x8c6203f8  lw          $v0, 0x3F8($v1)
    ctx->pc = 0x265c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1016)));
label_265c50:
    // 0x265c50: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265C50u;
    {
        const bool branch_taken_0x265c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265c50) {
            ctx->pc = 0x265C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265C50u;
            // 0x265c54: 0x8c620410  lw          $v0, 0x410($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265C6Cu;
            goto label_265c6c;
        }
    }
    ctx->pc = 0x265C58u;
    // 0x265c58: 0x94620428  lhu         $v0, 0x428($v1)
    ctx->pc = 0x265c58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1064)));
    // 0x265c5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265c60: 0xa4620428  sh          $v0, 0x428($v1)
    ctx->pc = 0x265c60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1064), (uint16_t)GPR_U32(ctx, 2));
    // 0x265c64: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265c68: 0x8c620410  lw          $v0, 0x410($v1)
    ctx->pc = 0x265c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1040)));
label_265c6c:
    // 0x265c6c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265C6Cu;
    {
        const bool branch_taken_0x265c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265c6c) {
            ctx->pc = 0x265C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265C6Cu;
            // 0x265c70: 0x8c62040c  lw          $v0, 0x40C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265C88u;
            goto label_265c88;
        }
    }
    ctx->pc = 0x265C74u;
    // 0x265c74: 0x9462042a  lhu         $v0, 0x42A($v1)
    ctx->pc = 0x265c74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1066)));
    // 0x265c78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265c7c: 0xa462042a  sh          $v0, 0x42A($v1)
    ctx->pc = 0x265c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1066), (uint16_t)GPR_U32(ctx, 2));
    // 0x265c80: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265c84: 0x8c62040c  lw          $v0, 0x40C($v1)
    ctx->pc = 0x265c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1036)));
label_265c88:
    // 0x265c88: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265C88u;
    {
        const bool branch_taken_0x265c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265c88) {
            ctx->pc = 0x265C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265C88u;
            // 0x265c8c: 0x8c620408  lw          $v0, 0x408($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1032)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265CA4u;
            goto label_265ca4;
        }
    }
    ctx->pc = 0x265C90u;
    // 0x265c90: 0x9462042a  lhu         $v0, 0x42A($v1)
    ctx->pc = 0x265c90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1066)));
    // 0x265c94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265c98: 0xa462042a  sh          $v0, 0x42A($v1)
    ctx->pc = 0x265c98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1066), (uint16_t)GPR_U32(ctx, 2));
    // 0x265c9c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265ca0: 0x8c620408  lw          $v0, 0x408($v1)
    ctx->pc = 0x265ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1032)));
label_265ca4:
    // 0x265ca4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265CA4u;
    {
        const bool branch_taken_0x265ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265ca4) {
            ctx->pc = 0x265CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265CA4u;
            // 0x265ca8: 0x8c620410  lw          $v0, 0x410($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265CC0u;
            goto label_265cc0;
        }
    }
    ctx->pc = 0x265CACu;
    // 0x265cac: 0x9462042a  lhu         $v0, 0x42A($v1)
    ctx->pc = 0x265cacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1066)));
    // 0x265cb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265cb4: 0xa462042a  sh          $v0, 0x42A($v1)
    ctx->pc = 0x265cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1066), (uint16_t)GPR_U32(ctx, 2));
    // 0x265cb8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265cbc: 0x8c620410  lw          $v0, 0x410($v1)
    ctx->pc = 0x265cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1040)));
label_265cc0:
    // 0x265cc0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265CC0u;
    {
        const bool branch_taken_0x265cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265cc0) {
            ctx->pc = 0x265CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265CC0u;
            // 0x265cc4: 0x8c62040c  lw          $v0, 0x40C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265CDCu;
            goto label_265cdc;
        }
    }
    ctx->pc = 0x265CC8u;
    // 0x265cc8: 0x9462042c  lhu         $v0, 0x42C($v1)
    ctx->pc = 0x265cc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1068)));
    // 0x265ccc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265cd0: 0xa462042c  sh          $v0, 0x42C($v1)
    ctx->pc = 0x265cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1068), (uint16_t)GPR_U32(ctx, 2));
    // 0x265cd4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265cd8: 0x8c62040c  lw          $v0, 0x40C($v1)
    ctx->pc = 0x265cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1036)));
label_265cdc:
    // 0x265cdc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265CDCu;
    {
        const bool branch_taken_0x265cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265cdc) {
            ctx->pc = 0x265CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265CDCu;
            // 0x265ce0: 0x8c620408  lw          $v0, 0x408($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1032)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265CF8u;
            goto label_265cf8;
        }
    }
    ctx->pc = 0x265CE4u;
    // 0x265ce4: 0x9462042c  lhu         $v0, 0x42C($v1)
    ctx->pc = 0x265ce4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1068)));
    // 0x265ce8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265cec: 0xa462042c  sh          $v0, 0x42C($v1)
    ctx->pc = 0x265cecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1068), (uint16_t)GPR_U32(ctx, 2));
    // 0x265cf0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265cf4: 0x8c620408  lw          $v0, 0x408($v1)
    ctx->pc = 0x265cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1032)));
label_265cf8:
    // 0x265cf8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265CF8u;
    {
        const bool branch_taken_0x265cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265cf8) {
            ctx->pc = 0x265CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265CF8u;
            // 0x265cfc: 0x8c6203f8  lw          $v0, 0x3F8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1016)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265D14u;
            goto label_265d14;
        }
    }
    ctx->pc = 0x265D00u;
    // 0x265d00: 0x9462042c  lhu         $v0, 0x42C($v1)
    ctx->pc = 0x265d00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1068)));
    // 0x265d04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265d08: 0xa462042c  sh          $v0, 0x42C($v1)
    ctx->pc = 0x265d08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1068), (uint16_t)GPR_U32(ctx, 2));
    // 0x265d0c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265d10: 0x8c6203f8  lw          $v0, 0x3F8($v1)
    ctx->pc = 0x265d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1016)));
label_265d14:
    // 0x265d14: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265D14u;
    {
        const bool branch_taken_0x265d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265d14) {
            ctx->pc = 0x265D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265D14u;
            // 0x265d18: 0x8c6203fc  lw          $v0, 0x3FC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1020)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265D30u;
            goto label_265d30;
        }
    }
    ctx->pc = 0x265D1Cu;
    // 0x265d1c: 0x9462042e  lhu         $v0, 0x42E($v1)
    ctx->pc = 0x265d1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1070)));
    // 0x265d20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265d24: 0xa462042e  sh          $v0, 0x42E($v1)
    ctx->pc = 0x265d24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1070), (uint16_t)GPR_U32(ctx, 2));
    // 0x265d28: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265d2c: 0x8c6203fc  lw          $v0, 0x3FC($v1)
    ctx->pc = 0x265d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1020)));
label_265d30:
    // 0x265d30: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265D30u;
    {
        const bool branch_taken_0x265d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265d30) {
            ctx->pc = 0x265D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265D30u;
            // 0x265d34: 0x8c620400  lw          $v0, 0x400($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265D4Cu;
            goto label_265d4c;
        }
    }
    ctx->pc = 0x265D38u;
    // 0x265d38: 0x9462042e  lhu         $v0, 0x42E($v1)
    ctx->pc = 0x265d38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1070)));
    // 0x265d3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265d40: 0xa462042e  sh          $v0, 0x42E($v1)
    ctx->pc = 0x265d40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1070), (uint16_t)GPR_U32(ctx, 2));
    // 0x265d44: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265d48: 0x8c620400  lw          $v0, 0x400($v1)
    ctx->pc = 0x265d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1024)));
label_265d4c:
    // 0x265d4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265D4Cu;
    {
        const bool branch_taken_0x265d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265d4c) {
            ctx->pc = 0x265D60u;
            goto label_265d60;
        }
    }
    ctx->pc = 0x265D54u;
    // 0x265d54: 0x9462042e  lhu         $v0, 0x42E($v1)
    ctx->pc = 0x265d54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1070)));
    // 0x265d58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x265d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265d5c: 0xa462042e  sh          $v0, 0x42E($v1)
    ctx->pc = 0x265d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1070), (uint16_t)GPR_U32(ctx, 2));
label_265d60:
    // 0x265d60: 0xc099878  jal         func_2661E0
    ctx->pc = 0x265D60u;
    SET_GPR_U32(ctx, 31, 0x265D68u);
    ctx->pc = 0x2661E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2661E0u, 0x265D60u, 0x265D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265D68u;
label_265d68:
    // 0x265d68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265D68u;
    {
        const bool branch_taken_0x265d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265d68) {
            ctx->pc = 0x265D78u;
            goto label_265d78;
        }
    }
    ctx->pc = 0x265D70u;
    // 0x265d70: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x265D70u;
    {
        const bool branch_taken_0x265d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D70u;
        // 0x265d74: 0xaf80aa74  sw          $zero, -0x558C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d70) {
            ctx->pc = 0x265EECu;
            goto label_265eec;
        }
    }
    ctx->pc = 0x265D78u;
label_265d78:
    // 0x265d78: 0xc099f30  jal         func_267CC0
    ctx->pc = 0x265D78u;
    SET_GPR_U32(ctx, 31, 0x265D80u);
    ctx->pc = 0x267CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267CC0u, 0x265D78u, 0x265D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265D80u;
label_265d80:
    // 0x265d80: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x265D80u;
    {
        const bool branch_taken_0x265d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D80u;
        // 0x265d84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d80) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265D88u;
    // 0x265d88: 0xc099e84  jal         func_267A10
    ctx->pc = 0x265D88u;
    SET_GPR_U32(ctx, 31, 0x265D90u);
    ctx->pc = 0x267A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A10u, 0x265D88u, 0x265D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265D90u;
label_265d90:
    // 0x265d90: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x265D90u;
    {
        const bool branch_taken_0x265d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265D90u;
        // 0x265d94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d90) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265D98u;
    // 0x265d98: 0xc09c9ca  jal         func_272728
    ctx->pc = 0x265D98u;
    SET_GPR_U32(ctx, 31, 0x265DA0u);
    ctx->pc = 0x272728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272728u, 0x265D98u, 0x265DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265DA0u;
label_265da0:
    // 0x265da0: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x265DA0u;
    {
        const bool branch_taken_0x265da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265DA0u;
        // 0x265da4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265da0) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265DA8u;
    // 0x265da8: 0xc099874  jal         func_2661D0
    ctx->pc = 0x265DA8u;
    SET_GPR_U32(ctx, 31, 0x265DB0u);
    ctx->pc = 0x2661D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2661D0u, 0x265DA8u, 0x265DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265DB0u;
label_265db0:
    // 0x265db0: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x265DB0u;
    {
        const bool branch_taken_0x265db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265DB0u;
        // 0x265db4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265db0) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265DB8u;
    // 0x265db8: 0xc09ca34  jal         func_2728D0
    ctx->pc = 0x265DB8u;
    SET_GPR_U32(ctx, 31, 0x265DC0u);
    ctx->pc = 0x2728D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2728D0u, 0x265DB8u, 0x265DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265DC0u;
label_265dc0:
    // 0x265dc0: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x265DC0u;
    {
        const bool branch_taken_0x265dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265DC0u;
        // 0x265dc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265dc0) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265DC8u;
    // 0x265dc8: 0xc09d0ba  jal         func_2742E8
    ctx->pc = 0x265DC8u;
    SET_GPR_U32(ctx, 31, 0x265DD0u);
    ctx->pc = 0x2742E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E8u, 0x265DC8u, 0x265DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265DD0u;
label_265dd0:
    // 0x265dd0: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x265DD0u;
    {
        const bool branch_taken_0x265dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265DD0u;
        // 0x265dd4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265dd0) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265DD8u;
    // 0x265dd8: 0xc09d3b8  jal         func_274EE0
    ctx->pc = 0x265DD8u;
    SET_GPR_U32(ctx, 31, 0x265DE0u);
    ctx->pc = 0x274EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274EE0u, 0x265DD8u, 0x265DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265DE0u;
label_265de0:
    // 0x265de0: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x265DE0u;
    {
        const bool branch_taken_0x265de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265DE0u;
        // 0x265de4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265de0) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265DE8u;
    // 0x265de8: 0xc09d0fa  jal         func_2743E8
    ctx->pc = 0x265DE8u;
    SET_GPR_U32(ctx, 31, 0x265DF0u);
    ctx->pc = 0x2743E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2743E8u, 0x265DE8u, 0x265DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265DF0u;
label_265df0:
    // 0x265df0: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x265DF0u;
    {
        const bool branch_taken_0x265df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265DF0u;
        // 0x265df4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265df0) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265DF8u;
    // 0x265df8: 0xc09d398  jal         func_274E60
    ctx->pc = 0x265DF8u;
    SET_GPR_U32(ctx, 31, 0x265E00u);
    ctx->pc = 0x274E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274E60u, 0x265DF8u, 0x265E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E00u;
label_265e00:
    // 0x265e00: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x265E00u;
    {
        const bool branch_taken_0x265e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E00u;
        // 0x265e04: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e00) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265E08u;
    // 0x265e08: 0xc09c6a0  jal         func_271A80
    ctx->pc = 0x265E08u;
    SET_GPR_U32(ctx, 31, 0x265E10u);
    ctx->pc = 0x271A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A80u, 0x265E08u, 0x265E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E10u;
label_265e10:
    // 0x265e10: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x265E10u;
    {
        const bool branch_taken_0x265e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E10u;
        // 0x265e14: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e10) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265E18u;
    // 0x265e18: 0xc09b6ae  jal         func_26DAB8
    ctx->pc = 0x265E18u;
    SET_GPR_U32(ctx, 31, 0x265E20u);
    ctx->pc = 0x26DAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DAB8u, 0x265E18u, 0x265E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E20u;
label_265e20:
    // 0x265e20: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x265E20u;
    {
        const bool branch_taken_0x265e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E20u;
        // 0x265e24: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e20) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265E28u;
    // 0x265e28: 0xc09d370  jal         func_274DC0
    ctx->pc = 0x265E28u;
    SET_GPR_U32(ctx, 31, 0x265E30u);
    ctx->pc = 0x274DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274DC0u, 0x265E28u, 0x265E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E30u;
label_265e30:
    // 0x265e30: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x265E30u;
    {
        const bool branch_taken_0x265e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E30u;
        // 0x265e34: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e30) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265E38u;
    // 0x265e38: 0xc09bb96  jal         func_26EE58
    ctx->pc = 0x265E38u;
    SET_GPR_U32(ctx, 31, 0x265E40u);
    ctx->pc = 0x26EE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EE58u, 0x265E38u, 0x265E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E40u;
label_265e40:
    // 0x265e40: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x265E40u;
    {
        const bool branch_taken_0x265e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E40u;
        // 0x265e44: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e40) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265E48u;
    // 0x265e48: 0xc09ce3a  jal         func_2738E8
    ctx->pc = 0x265E48u;
    SET_GPR_U32(ctx, 31, 0x265E50u);
    ctx->pc = 0x2738E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2738E8u, 0x265E48u, 0x265E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E50u;
label_265e50:
    // 0x265e50: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x265E50u;
    {
        const bool branch_taken_0x265e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E50u;
        // 0x265e54: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e50) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265E58u;
    // 0x265e58: 0xc09cebc  jal         func_273AF0
    ctx->pc = 0x265E58u;
    SET_GPR_U32(ctx, 31, 0x265E60u);
    ctx->pc = 0x273AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273AF0u, 0x265E58u, 0x265E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E60u;
label_265e60:
    // 0x265e60: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x265E60u;
    {
        const bool branch_taken_0x265e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E60u;
        // 0x265e64: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e60) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265E68u;
    // 0x265e68: 0xc09bffc  jal         func_26FFF0
    ctx->pc = 0x265E68u;
    SET_GPR_U32(ctx, 31, 0x265E70u);
    ctx->pc = 0x26FFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FFF0u, 0x265E68u, 0x265E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E70u;
label_265e70:
    // 0x265e70: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x265E70u;
    {
        const bool branch_taken_0x265e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E70u;
        // 0x265e74: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e70) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265E78u;
    // 0x265e78: 0xc09c22a  jal         func_2708A8
    ctx->pc = 0x265E78u;
    SET_GPR_U32(ctx, 31, 0x265E80u);
    ctx->pc = 0x2708A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2708A8u, 0x265E78u, 0x265E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E80u;
label_265e80:
    // 0x265e80: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x265E80u;
    {
        const bool branch_taken_0x265e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E80u;
        // 0x265e84: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e80) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265E88u;
    // 0x265e88: 0xc09c46e  jal         func_2711B8
    ctx->pc = 0x265E88u;
    SET_GPR_U32(ctx, 31, 0x265E90u);
    ctx->pc = 0x2711B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711B8u, 0x265E88u, 0x265E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E90u;
label_265e90:
    // 0x265e90: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x265E90u;
    {
        const bool branch_taken_0x265e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E90u;
        // 0x265e94: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e90) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265E98u;
    // 0x265e98: 0xc09d184  jal         func_274610
    ctx->pc = 0x265E98u;
    SET_GPR_U32(ctx, 31, 0x265EA0u);
    ctx->pc = 0x274610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274610u, 0x265E98u, 0x265EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265EA0u;
label_265ea0:
    // 0x265ea0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x265EA0u;
    {
        const bool branch_taken_0x265ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265EA0u;
        // 0x265ea4: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ea0) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265EA8u;
    // 0x265ea8: 0xc09c6f0  jal         func_271BC0
    ctx->pc = 0x265EA8u;
    SET_GPR_U32(ctx, 31, 0x265EB0u);
    ctx->pc = 0x271BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BC0u, 0x265EA8u, 0x265EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265EB0u;
label_265eb0:
    // 0x265eb0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x265EB0u;
    {
        const bool branch_taken_0x265eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265EB0u;
        // 0x265eb4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265eb0) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265EB8u;
    // 0x265eb8: 0xc09bec8  jal         func_26FB20
    ctx->pc = 0x265EB8u;
    SET_GPR_U32(ctx, 31, 0x265EC0u);
    ctx->pc = 0x26FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FB20u, 0x265EB8u, 0x265EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265EC0u;
label_265ec0:
    // 0x265ec0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x265EC0u;
    {
        const bool branch_taken_0x265ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265EC0u;
        // 0x265ec4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ec0) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265EC8u;
    // 0x265ec8: 0xc09c87a  jal         func_2721E8
    ctx->pc = 0x265EC8u;
    SET_GPR_U32(ctx, 31, 0x265ED0u);
    ctx->pc = 0x2721E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2721E8u, 0x265EC8u, 0x265ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265ED0u;
label_265ed0:
    // 0x265ed0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265ED0u;
    {
        const bool branch_taken_0x265ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265ED0u;
        // 0x265ed4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ed0) {
            ctx->pc = 0x265EE8u;
            goto label_265ee8;
        }
    }
    ctx->pc = 0x265ED8u;
    // 0x265ed8: 0xc09c9bc  jal         func_2726F0
    ctx->pc = 0x265ED8u;
    SET_GPR_U32(ctx, 31, 0x265EE0u);
    ctx->pc = 0x2726F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2726F0u, 0x265ED8u, 0x265EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265EE0u;
label_265ee0:
    // 0x265ee0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x265EE0u;
    {
        const bool branch_taken_0x265ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265EE0u;
        // 0x265ee4: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ee0) {
            ctx->pc = 0x265EECu;
            goto label_265eec;
        }
    }
    ctx->pc = 0x265EE8u;
label_265ee8:
    // 0x265ee8: 0xaf82aa74  sw          $v0, -0x558C($gp)
    ctx->pc = 0x265ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945396), GPR_U32(ctx, 2));
label_265eec:
    // 0x265eec: 0xc09952a  jal         func_2654A8
    ctx->pc = 0x265EECu;
    SET_GPR_U32(ctx, 31, 0x265EF4u);
    ctx->pc = 0x2654A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2654A8u, 0x265EECu, 0x265EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265EF4u;
label_265ef4:
    // 0x265ef4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265ef8: 0x8f84aa74  lw          $a0, -0x558C($gp)
    ctx->pc = 0x265ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945396)));
    // 0x265efc: 0x8c62043c  lw          $v0, 0x43C($v1)
    ctx->pc = 0x265efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1084)));
    // 0x265f00: 0x10440012  beq         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x265F00u;
    {
        const bool branch_taken_0x265f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x265F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F00u;
        // 0x265f04: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f00) {
            ctx->pc = 0x265F4Cu;
            goto label_265f4c;
        }
    }
    ctx->pc = 0x265F08u;
    // 0x265f08: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x265F08u;
    {
        const bool branch_taken_0x265f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x265F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F08u;
        // 0x265f0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f08) {
            ctx->pc = 0x265F50u;
            goto label_265f50;
        }
    }
    ctx->pc = 0x265F10u;
    // 0x265f10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265F10u;
    {
        const bool branch_taken_0x265f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F10u;
        // 0x265f14: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f10) {
            ctx->pc = 0x265F20u;
            goto label_265f20;
        }
    }
    ctx->pc = 0x265F18u;
label_265f18:
    // 0x265f18: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265f1c: 0x0  nop
    ctx->pc = 0x265f1cu;
    // NOP
label_265f20:
    // 0x265f20: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x265f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x265f24: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x265f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x265f28: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x265f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x265f2c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x265f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265f30: 0x8c850430  lw          $a1, 0x430($a0)
    ctx->pc = 0x265f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1072)));
    // 0x265f34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x265f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265f38: 0x4c1fff7  bgez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x265F38u;
    {
        const bool branch_taken_0x265f38 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x265F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F38u;
        // 0x265f3c: 0xac450434  sw          $a1, 0x434($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1076), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265f38) {
            ctx->pc = 0x265F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265f18;
        }
    }
    ctx->pc = 0x265F40u;
    // 0x265f40: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x265f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x265f44: 0x8f82aa74  lw          $v0, -0x558C($gp)
    ctx->pc = 0x265f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945396)));
    // 0x265f48: 0xac62043c  sw          $v0, 0x43C($v1)
    ctx->pc = 0x265f48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1084), GPR_U32(ctx, 2));
label_265f4c:
    // 0x265f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_265f50:
    // 0x265f50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x265f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265f54: 0x3e00008  jr          $ra
    ctx->pc = 0x265F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F54u;
        // 0x265f58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265F5Cu;
    // 0x265f5c: 0x0  nop
    ctx->pc = 0x265f5cu;
    // NOP
    ctx->pc = 0x265f60u;
}
