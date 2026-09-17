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

// Function: sub_00283A50
// Address: 0x283a50 - 0x283b68
void sub_00283A50_0x283a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283A50_0x283a50");
#endif

    switch (ctx->pc) {
        case 0x283a6cu: goto label_283a6c;
        case 0x283a94u: goto label_283a94;
        case 0x283ab8u: goto label_283ab8;
        case 0x283ae0u: goto label_283ae0;
        case 0x283b08u: goto label_283b08;
        case 0x283b30u: goto label_283b30;
        case 0x283b50u: goto label_283b50;
        default: break;
    }

    ctx->pc = 0x283a50u;

    // 0x283a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x283a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x283a54: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x283a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x283a58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283a5c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x283A5Cu;
    {
        const bool branch_taken_0x283a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A5Cu;
        // 0x283a60: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a5c) {
            ctx->pc = 0x283A80u;
            goto label_283a80;
        }
    }
    ctx->pc = 0x283A64u;
    // 0x283a64: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x283A64u;
    SET_GPR_U32(ctx, 31, 0x283A6Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x283A64u, 0x283A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283A6Cu;
label_283a6c:
    // 0x283a6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x283a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x283a70: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x283a70u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x283a74: 0x2010  mfhi        $a0
    ctx->pc = 0x283a74u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x283a78: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x283A78u;
    {
        const bool branch_taken_0x283a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A78u;
        // 0x283a7c: 0x24820016  addiu       $v0, $a0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a78) {
            ctx->pc = 0x283B58u;
            goto label_283b58;
        }
    }
    ctx->pc = 0x283A80u;
label_283a80:
    // 0x283a80: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x283a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x283a84: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x283A84u;
    {
        const bool branch_taken_0x283a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283a84) {
            ctx->pc = 0x283A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283A84u;
            // 0x283a88: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x283AA8u;
            goto label_283aa8;
        }
    }
    ctx->pc = 0x283A8Cu;
    // 0x283a8c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x283A8Cu;
    SET_GPR_U32(ctx, 31, 0x283A94u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x283A8Cu, 0x283A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283A94u;
label_283a94:
    // 0x283a94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x283a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x283a98: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x283a98u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x283a9c: 0x2010  mfhi        $a0
    ctx->pc = 0x283a9cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x283aa0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x283AA0u;
    {
        const bool branch_taken_0x283aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AA0u;
        // 0x283aa4: 0x24820013  addiu       $v0, $a0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283aa0) {
            ctx->pc = 0x283B58u;
            goto label_283b58;
        }
    }
    ctx->pc = 0x283AA8u;
label_283aa8:
    // 0x283aa8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x283AA8u;
    {
        const bool branch_taken_0x283aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283aa8) {
            ctx->pc = 0x283AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283AA8u;
            // 0x283aac: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x283AD0u;
            goto label_283ad0;
        }
    }
    ctx->pc = 0x283AB0u;
    // 0x283ab0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x283AB0u;
    SET_GPR_U32(ctx, 31, 0x283AB8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x283AB0u, 0x283AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283AB8u;
label_283ab8:
    // 0x283ab8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x283ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x283abc: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x283abcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x283ac0: 0x2010  mfhi        $a0
    ctx->pc = 0x283ac0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x283ac4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x283AC4u;
    {
        const bool branch_taken_0x283ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AC4u;
        // 0x283ac8: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ac4) {
            ctx->pc = 0x283B58u;
            goto label_283b58;
        }
    }
    ctx->pc = 0x283ACCu;
    // 0x283acc: 0x0  nop
    ctx->pc = 0x283accu;
    // NOP
label_283ad0:
    // 0x283ad0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x283AD0u;
    {
        const bool branch_taken_0x283ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283ad0) {
            ctx->pc = 0x283AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283AD0u;
            // 0x283ad4: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x283AF8u;
            goto label_283af8;
        }
    }
    ctx->pc = 0x283AD8u;
    // 0x283ad8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x283AD8u;
    SET_GPR_U32(ctx, 31, 0x283AE0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x283AD8u, 0x283AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283AE0u;
label_283ae0:
    // 0x283ae0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x283ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x283ae4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x283ae4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x283ae8: 0x2010  mfhi        $a0
    ctx->pc = 0x283ae8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x283aec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x283AECu;
    {
        const bool branch_taken_0x283aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AECu;
        // 0x283af0: 0x2482000d  addiu       $v0, $a0, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283aec) {
            ctx->pc = 0x283B58u;
            goto label_283b58;
        }
    }
    ctx->pc = 0x283AF4u;
    // 0x283af4: 0x0  nop
    ctx->pc = 0x283af4u;
    // NOP
label_283af8:
    // 0x283af8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x283AF8u;
    {
        const bool branch_taken_0x283af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283af8) {
            ctx->pc = 0x283B20u;
            goto label_283b20;
        }
    }
    ctx->pc = 0x283B00u;
    // 0x283b00: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x283B00u;
    SET_GPR_U32(ctx, 31, 0x283B08u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x283B00u, 0x283B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B08u;
label_283b08:
    // 0x283b08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x283b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x283b0c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x283b0cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x283b10: 0x2010  mfhi        $a0
    ctx->pc = 0x283b10u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x283b14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x283B14u;
    {
        const bool branch_taken_0x283b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B14u;
        // 0x283b18: 0x2482000a  addiu       $v0, $a0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b14) {
            ctx->pc = 0x283B58u;
            goto label_283b58;
        }
    }
    ctx->pc = 0x283B1Cu;
    // 0x283b1c: 0x0  nop
    ctx->pc = 0x283b1cu;
    // NOP
label_283b20:
    // 0x283b20: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x283B20u;
    {
        const bool branch_taken_0x283b20 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x283b20) {
            ctx->pc = 0x283B48u;
            goto label_283b48;
        }
    }
    ctx->pc = 0x283B28u;
    // 0x283b28: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x283B28u;
    SET_GPR_U32(ctx, 31, 0x283B30u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x283B28u, 0x283B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B30u;
label_283b30:
    // 0x283b30: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x283b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x283b34: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x283b34u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x283b38: 0x2010  mfhi        $a0
    ctx->pc = 0x283b38u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x283b3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x283B3Cu;
    {
        const bool branch_taken_0x283b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B3Cu;
        // 0x283b40: 0x24820005  addiu       $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b3c) {
            ctx->pc = 0x283B58u;
            goto label_283b58;
        }
    }
    ctx->pc = 0x283B44u;
    // 0x283b44: 0x0  nop
    ctx->pc = 0x283b44u;
    // NOP
label_283b48:
    // 0x283b48: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x283B48u;
    SET_GPR_U32(ctx, 31, 0x283B50u);
    ctx->pc = 0x283B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283B48u;
    // 0x283b4c: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x283B48u, 0x283B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B50u;
label_283b50:
    // 0x283b50: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x283b50u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x283b54: 0x1010  mfhi        $v0
    ctx->pc = 0x283b54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_283b58:
    // 0x283b58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283b5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x283b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x283b60: 0x3e00008  jr          $ra
    ctx->pc = 0x283B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B60u;
        // 0x283b64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283B68u;
}
