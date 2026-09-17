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

// Function: sub_0034DE08
// Address: 0x34de08 - 0x34dfa4
void sub_0034DE08_0x34de08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DE08_0x34de08");
#endif

    switch (ctx->pc) {
        case 0x34de58u: goto label_34de58;
        case 0x34de6cu: goto label_34de6c;
        case 0x34deccu: goto label_34decc;
        case 0x34def4u: goto label_34def4;
        case 0x34df48u: goto label_34df48;
        case 0x34df5cu: goto label_34df5c;
        default: break;
    }

    ctx->pc = 0x34de08u;

    // 0x34de08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34de08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34de0c: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34de0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34de10: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34de10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34de14: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34de14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34de18: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34de18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34de1c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34de1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34de20: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34de20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34de24: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34de24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x34de28: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x34de28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x34de2c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34de30: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34de30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34de34: 0xafc20028  sw          $v0, 0x28($fp)
    ctx->pc = 0x34de34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x34de38: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x34de38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34de3c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34de40: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34de40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34de44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34de44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34de48: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34de48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34de4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34de4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34de50: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x34DE50u;
    SET_GPR_U32(ctx, 31, 0x34DE58u);
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x34DE50u, 0x34DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE58u;
label_34de58:
    // 0x34de58: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x34de58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x34de5c: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34de5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34de60: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34de60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34de64: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x34DE64u;
    SET_GPR_U32(ctx, 31, 0x34DE6Cu);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x34DE64u, 0x34DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE6Cu;
label_34de6c:
    // 0x34de6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34de70: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34de70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34de74: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34de74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34de78: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34de7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34de80: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x34de80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x34de84: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34de84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34de88: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34de8c: 0x28420401  slti        $v0, $v0, 0x401
    ctx->pc = 0x34de8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x34de90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DE90u;
    {
        const bool branch_taken_0x34de90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34de90) {
            ctx->pc = 0x34DEA8u;
            goto label_34dea8;
        }
    }
    ctx->pc = 0x34DE98u;
    // 0x34de98: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34de98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34de9c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34de9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x34dea0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x34DEA0u;
    {
        const bool branch_taken_0x34dea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dea0) {
            ctx->pc = 0x34DF8Cu;
            goto label_34df8c;
        }
    }
    ctx->pc = 0x34DEA8u;
label_34dea8:
    // 0x34dea8: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34deac: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34deacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34deb0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34deb4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34deb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34deb8: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34debc: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x34debcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x34dec0: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34dec4: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34DEC4u;
    SET_GPR_U32(ctx, 31, 0x34DECCu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34DEC4u, 0x34DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DECCu;
label_34decc:
    // 0x34decc: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34deccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34ded0: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34ded4: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34ded4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34ded8: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34dedc: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x34dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x34dee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34dee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dee4: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x34dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34dee8: 0x8fc60018  lw          $a2, 0x18($fp)
    ctx->pc = 0x34dee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34deec: 0xc04a125  jal         func_128494
    ctx->pc = 0x34DEECu;
    SET_GPR_U32(ctx, 31, 0x34DEF4u);
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x34DEECu, 0x34DEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DEF4u;
label_34def4:
    // 0x34def4: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x34def4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34def8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34def8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34defc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34defcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34df00: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x34df00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34df04: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34df04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34df08: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34df08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34df0c: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x34df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34df10: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34df14: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x34df14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x34df18: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x34df18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34df1c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34df20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34df20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34df24: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x34df24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34df28: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34df28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34df2c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34df2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34df30: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x34df30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34df34: 0x8fc50020  lw          $a1, 0x20($fp)
    ctx->pc = 0x34df34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34df38: 0x8fc60014  lw          $a2, 0x14($fp)
    ctx->pc = 0x34df38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34df3c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34df3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34df40: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34DF40u;
    SET_GPR_U32(ctx, 31, 0x34DF48u);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34DF40u, 0x34DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DF48u;
label_34df48:
    // 0x34df48: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34df48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34df4c: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x34df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x34df50: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34df50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34df54: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34DF54u;
    SET_GPR_U32(ctx, 31, 0x34DF5Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34DF54u, 0x34DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DF5Cu;
label_34df5c:
    // 0x34df5c: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34df60: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DF60u;
    {
        const bool branch_taken_0x34df60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34df60) {
            ctx->pc = 0x34DF78u;
            goto label_34df78;
        }
    }
    ctx->pc = 0x34DF68u;
    // 0x34df68: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34df68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34df6c: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34df6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34df70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34DF70u;
    {
        const bool branch_taken_0x34df70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34df70) {
            ctx->pc = 0x34DF8Cu;
            goto label_34df8c;
        }
    }
    ctx->pc = 0x34DF78u;
label_34df78:
    // 0x34df78: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34df78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34df7c: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34df80: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34df80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34df84: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34df88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34df8c:
    // 0x34df8c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34df8cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34df90: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34df90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34df94: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34df94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34df98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34df98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34df9c: 0x3e00008  jr          $ra
    ctx->pc = 0x34DF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DFA4u;
}
